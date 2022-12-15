#pragma once

#include<iostream>

#include<assert.h>

#include<utility>

using namespace std;

namespace simulation
{
  template<typename T>
  class vector
  {
  public:
	  //Vector的迭代器是一个原生指针
	  typedef T* iterator;
	  typedef const T* const_iterator;


	  iterator begin()//正向开头
	  {
		  return _start;
	  }

	  iterator end()//正向结尾，指向最后一个数据后一个位置
	  {
		  return _finish;
	  }

	  const_iterator begin() const //正向开头 const对象
	  {
		  return _start;
	  }

	  const_iterator end() const //正向结尾，指向最后一个数据后一个位置 const对象
	  {
		  return _finish;
	  }

	  const_iterator cbegin()//用于返回const迭代器
	  {
		  return _start;
	  }

	  const_iterator cend() const //用于返回const迭代器
	  {
		  return _finish;
	  }


// construct and destroy

	  vector()
		  :_start(nullptr),
		  _finish(nullptr),
		  _endOfStorage(nullptr)
	  {}

	  vector(int n, const T& value = T())
		  :_start(nullptr),
		  _finish(nullptr),
		  _endOfStorage(nullptr)
	  {
		  assert(n >= 0);

		  //申请空间并初始化
		  _start = new T[n];
		  _finish = _endOfStorage = _start + n;

		  //for (int i = 0; i < size(); ++i) _start[i] = value;
		  for (auto& e : *this)
			  e = value;
	  }

	  template<class InputIterator>
	  vector(InputIterator first, InputIterator last)
		  :_start(nullptr),
		  _finish(nullptr),
		  _endOfStorage(nullptr)
	  {
		  while (first != last)//拷贝数据
		  {
			  push_back(*first);
			  ++first;
		  }
	  }

	  vector(const vector<T>& v)
		  :_start(nullptr),
		  _finish(nullptr),
		  _endOfStorage(nullptr)
	  {
		  for (auto e : v)//复用插入
			  push_back(e);
	  }

	  vector<T>& operator= (vector<T> v)
	  {
		  if (this != &v)//防止自己给自己赋值
		  {
			  vector<int> tmp(v);
			  swap(tmp);
		  }
		  return *this;
	  }

	  ~vector()//析构置空
	  {
		  delete[] _start;
		  _start = _finish = _endOfStorage = nullptr;
	  }

// capacity
	  size_t size() const
	  {
		  return _finish - _start;//数据结尾位置减起始位置
	  }

	  size_t capacity() const
	  {
		  return _endOfStorage - _start;//空间结尾位置减起始位置
	  }

	  void reserve(size_t n)
	  {
		  if (n > capacity())
		  {
			  //2倍扩
			  size_t newcap = capacity() == 0 ? 1 : capacity();
			  size_t sz = size();//预防size()失效
			  while (newcap < n)
				  newcap *= 2;

			  iterator tmp = new T[newcap];//申请新空间

			  //挪动数据
			  for (int i = 0; i < sz; ++i)
				  tmp[i] = _start[i];

			  //改变指向
			  delete[] _start;
			  _start = tmp;
			  _finish = _start + sz;
			  _endOfStorage = _start + newcap;
		  }
	  }

	  void resize(size_t n, const T& value = T())
	  {
		  if (n > capacity())//大于容量时
		  {
			  //按需扩
			  size_t sz = size();
			  iterator tmp = new T[n];//申请新空间

			  //挪动数据
			  for (size_t i = 0; i < sz; ++i)
				  tmp[i] = _start[i];

			  //改变指向
			  delete[] _start;
			  _start = tmp;
			  _finish = _start + n;
			  _endOfStorage = _start + n;

			  //赋值
			  for (size_t i = sz; i < n; ++i)
				  _start[i] = value;
		  }
		  else if (n > size())//大于数据量时
		  {
			  //赋值插入数据
			  for (size_t i = size(); i < n; ++i)
				  _start[i] = value;
			  _finish = _start + n;
		  }
		  else			//小于数据量时
		  {
			  //缩减数据量
			  _finish -= size() - n;
		  }
	  }


///////////////access///////////////////////////////

	  T& operator[](size_t pos)
	  {
		  assert(pos >= 0 && pos < size());//确保位置合法性
		  return _start[pos];
	  }

	  const T& operator[](size_t pos) const
	  {
		  assert(pos >= 0 && pos < size());//确保位置合法性
		  return _start[pos];
	  }


///////////////modify/////////////////////////////

	  void push_back(const T& x)
	  {
		  if (size() >= capacity())
		  {
			  reserve(size() + 1);
		  }
		  *_finish = x;
		  ++_finish;
	  }

	  void pop_back()
	  {
		  --_finish;
	  }

	  void swap(vector<T>& v)
	  {
		  std::swap(_start, v._start);
		  std::swap(_finish, v._finish);
		  std::swap(_endOfStorage, v._endOfStorage);
	  }

	  iterator insert(iterator pos, const T& x)
	  {
		  size_t end = size();//尾部位置
		  size_t p = pos - _start;//插入位置
		  while (end > p)//挪动数据
		  {
			  _start[end] = _start[end - 1];
			  --end;
		  }
		  //插入并移动结尾
		  *pos = x;
		  ++_finish;
		  return pos;
	  }

	  iterator erase(iterator pos)
	  {
		  size_t end = size();//尾部位置
		  size_t p = pos - _start;//删除位置
		  while (p < end)//挪动数据
		  {
			  _start[p] = _start[p + 1];
			  ++p;
		  }
		  //移动结尾
		  --_finish;
		  return pos;
	  }


  private:
	  iterator _start; // 指向数据块的开始
	  iterator _finish; // 指向有效数据的尾
	  iterator _endOfStorage; // 指向存储容量的尾
  };

}
