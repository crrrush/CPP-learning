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
	  //Vector�ĵ�������һ��ԭ��ָ��
	  typedef T* iterator;
	  typedef const T* const_iterator;


	  iterator begin()//����ͷ
	  {
		  return _start;
	  }

	  iterator end()//�����β��ָ�����һ�����ݺ�һ��λ��
	  {
		  return _finish;
	  }

	  const_iterator begin() const //����ͷ const����
	  {
		  return _start;
	  }

	  const_iterator end() const //�����β��ָ�����һ�����ݺ�һ��λ�� const����
	  {
		  return _finish;
	  }

	  const_iterator cbegin()//���ڷ���const������
	  {
		  return _start;
	  }

	  const_iterator cend() const //���ڷ���const������
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

		  //����ռ䲢��ʼ��
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
		  while (first != last)//��������
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
		  for (auto e : v)//���ò���
			  push_back(e);
	  }

	  vector<T>& operator= (vector<T> v)
	  {
		  if (this != &v)//��ֹ�Լ����Լ���ֵ
		  {
			  vector<int> tmp(v);
			  swap(tmp);
		  }
		  return *this;
	  }

	  ~vector()//�����ÿ�
	  {
		  delete[] _start;
		  _start = _finish = _endOfStorage = nullptr;
	  }

// capacity
	  size_t size() const
	  {
		  return _finish - _start;//���ݽ�βλ�ü���ʼλ��
	  }

	  size_t capacity() const
	  {
		  return _endOfStorage - _start;//�ռ��βλ�ü���ʼλ��
	  }

	  void reserve(size_t n)
	  {
		  if (n > capacity())
		  {
			  //2����
			  size_t newcap = capacity() == 0 ? 1 : capacity();
			  size_t sz = size();//Ԥ��size()ʧЧ
			  while (newcap < n)
				  newcap *= 2;

			  iterator tmp = new T[newcap];//�����¿ռ�

			  //Ų������
			  for (int i = 0; i < sz; ++i)
				  tmp[i] = _start[i];

			  //�ı�ָ��
			  delete[] _start;
			  _start = tmp;
			  _finish = _start + sz;
			  _endOfStorage = _start + newcap;
		  }
	  }

	  void resize(size_t n, const T& value = T())
	  {
		  if (n > capacity())//��������ʱ
		  {
			  //������
			  size_t sz = size();
			  iterator tmp = new T[n];//�����¿ռ�

			  //Ų������
			  for (size_t i = 0; i < sz; ++i)
				  tmp[i] = _start[i];

			  //�ı�ָ��
			  delete[] _start;
			  _start = tmp;
			  _finish = _start + n;
			  _endOfStorage = _start + n;

			  //��ֵ
			  for (size_t i = sz; i < n; ++i)
				  _start[i] = value;
		  }
		  else if (n > size())//����������ʱ
		  {
			  //��ֵ��������
			  for (size_t i = size(); i < n; ++i)
				  _start[i] = value;
			  _finish = _start + n;
		  }
		  else			//С��������ʱ
		  {
			  //����������
			  _finish -= size() - n;
		  }
	  }


///////////////access///////////////////////////////

	  T& operator[](size_t pos)
	  {
		  assert(pos >= 0 && pos < size());//ȷ��λ�úϷ���
		  return _start[pos];
	  }

	  const T& operator[](size_t pos) const
	  {
		  assert(pos >= 0 && pos < size());//ȷ��λ�úϷ���
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
		  size_t end = size();//β��λ��
		  size_t p = pos - _start;//����λ��
		  while (end > p)//Ų������
		  {
			  _start[end] = _start[end - 1];
			  --end;
		  }
		  //���벢�ƶ���β
		  *pos = x;
		  ++_finish;
		  return pos;
	  }

	  iterator erase(iterator pos)
	  {
		  size_t end = size();//β��λ��
		  size_t p = pos - _start;//ɾ��λ��
		  while (p < end)//Ų������
		  {
			  _start[p] = _start[p + 1];
			  ++p;
		  }
		  //�ƶ���β
		  --_finish;
		  return pos;
	  }


  private:
	  iterator _start; // ָ�����ݿ�Ŀ�ʼ
	  iterator _finish; // ָ����Ч���ݵ�β
	  iterator _endOfStorage; // ָ��洢������β
  };

}
