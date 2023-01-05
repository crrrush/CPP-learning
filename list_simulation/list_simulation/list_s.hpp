#pragma once

#include<assert.h>

#include<utility>

namespace simulation
{
	// List的节点类
	template<class T>
	struct ListNode
	{
		ListNode(const T& val = T())
			:_pPre(nullptr),
			_pNext(nullptr),
			_val(val)
		{
		}

		ListNode<T>* _pPre;
		ListNode<T>* _pNext;
		T _val;
	};


	//List的迭代器类
	template<class T, class Ref, class Ptr>
	class ListIterator
	{
		//friend class list<T>;
		typedef ListNode<T>* PNode;
		typedef ListIterator<T, Ref, Ptr> Self;
	public:
		ListIterator(PNode pNode = nullptr)
			:_pNode(pNode)
		{
		}

		ListIterator(const Self& l)
			:_pNode(l._pNode)
		{
		}

		T& operator*()
		{
			//return _pNode->_val;
			return (*_pNode)._val;
		}

		T* operator->()
		{
			//return &(_pNode->_val);
			return &(operator*());
		}

		//前置
		Self& operator++()
		{
			_pNode = _pNode->_pNext;
			return *this;
		}

		//后置
		Self operator++(int)
		{
			ListIterator ret(_pNode);
			//_pNode = _pNode->_pNext;
			++(*this);
			return ret;
		}

		//前置
		Self& operator--()
		{
			_pNode = _pNode->_pPre;
			return *this;
		}

		//后置
		Self& operator--(int)
		{
			ListIterator ret(_pNode);
			//_pNode = _pNode->_pPre;
			--(*this);
			return ret;
		}

		bool operator!=(const Self& l)
		{
			return _pNode != l._pNode;
		}

		bool operator==(const Self& l)
		{
			return _pNode == l._pNode;
		}
	//private:
		PNode _pNode;
	};


	//list类
	template<class T>
	class list
	{
		typedef ListNode<T> Node;
		typedef Node* PNode;
	public:
		typedef ListIterator<T, T&, T*> iterator;
		typedef ListIterator<T, const T&, const T&> const_iterator;
	public:
		///////////////////////////////////////////////////////////////
		// List的构造
		list()
			:_pHead(nullptr)
		{
			CreateHead();//创建头
		}

		list(int n, const T& value = T())
			:_pHead(nullptr)
		{
			CreateHead();//创建头
			
			//初始化
			//while (n--)
			//{
			//	PNode newNode = new Node;
			//	newNode->_val = value;//赋值
			//	//连接
			//	newNode->_pPre = _pHead->_pPre;
			//	newNode->_pNext = _pHead;
			//	_pHead->_pPre->_pNext = newNode;
			//	_pHead->_pPre = newNode;
			//}
			while (n--)
				push_back(value);//复用

		}

		template <class Iterator>
		list(Iterator first, Iterator last)
			:_pHead(nullptr)
		{
			CreateHead();
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		list(const list<T>& l)
			:_pHead(nullptr)
		{
			CreateHead();
			for (auto& e : l)
				push_back(e);
		}

		list<T>& operator=(const list<T> l)
		{
			list tmp(l);
			swap(tmp);
			return *this;
		}

		~list()
		{
			PNode Next = _pHead->_pNext;
			while (Next != _pHead)
			{
				PNode tmp = Next;
				Next = Next->_pNext;
				delete tmp;
			}
			delete _pHead;
		}

		/////////////////////////////////////////////////////////////////
		//// List Iterator

		iterator begin()
		{
			return iterator(_pHead->_pNext);
		}

		iterator end()
		{
			return iterator(_pHead);
		}

		const_iterator begin() const
		{
			return const_iterator(_pHead->_pNext);
		}

		const_iterator end() const
		{
			return const_iterator(_pHead);
		}

		/////////////////////////////////////////////////////////////////
		//// List Capacity
		size_t size() const
		{
			size_t sz = 0;
			for (auto e : *this)
				++sz;
			return sz;
		}

		bool empty() const
		{
			return _pHead->_pPre == _pHead;
		}

		//////////////////////////////////////////////////////////////
		//// List Access

		T& front()
		{
			assert(!empty());
			return _pHead->_pNext->_val;
		}

		const T& front() const
		{
			assert(!empty());
			return _pHead->_pNext->_val;
		}

		T& back()
		{
			assert(!empty());
			return _pHead->_pPre->_val;
		}

		const T& back() const
		{
			assert(!empty());
			return _pHead->_pPre->_val;
		}

		//////////////////////////////////////////////////////////////
		//// List Modify

		void push_back(const T& val)
		{
			//PNode newNode = new Node;
			//newNode->_val = val;//赋值

			////连接
			//newNode->_pPre = _pHead->_pPre;
			//newNode->_pNext = _pHead;
			//_pHead->_pPre->_pNext = newNode;
			//_pHead->_pPre = newNode;

			insert(end(), val); 
		}

		void pop_back()
		{
			//if (!empty())
			//{
			//	PNode Pre = _pHead->_pPre->_pPre;
			//	Pre->_pNext = _pHead;
			//	delete _pHead->_pPre;
			//	_pHead->_pPre = Pre;
			//}

			erase(--end());
		}

		void push_front(const T& val)
		{
			//PNode newNode = new Node;
			//newNode->_val = val;//赋值

			////连接
			//newNode->_pNext = _pHead->_pNext;
			//newNode->_pPre = _pHead;
			//_pHead->_pNext->_pPre = newNode;
			//_pHead->_pNext = newNode;

			insert(begin(), val);
		}

		void pop_front()
		{
			//if (!empty())
			//{
			//	PNode Next = _pHead->_pNext->_pNext;
			//	Next->_pPre = _pHead;
			//	delete _pHead->_pNext;
			//	_pHead->_pNext = Next;
			//}

			erase(begin());
		}

		// 在pos位置前插入值为val的节点

		iterator insert(iterator pos, const T& val)
		{
			//assert(pos != end());

			PNode newNode = BuyNode(val);

			newNode->_pNext = pos._pNode;
			newNode->_pPre = (pos._pNode)->_pPre;
			(pos._pNode)->_pPre->_pNext = newNode;
			(pos._pNode)->_pPre = newNode;
			
			return pos;
		}

		// 删除pos位置的节点，返回该节点的下一个位置
		iterator erase(iterator pos)
		{
			assert(pos != end());

			iterator tmp(pos);
			++tmp;
			(pos._pNode)->_pPre->_pNext = (pos._pNode)->_pNext;
			(pos._pNode)->_pNext->_pPre = (pos._pNode)->_pPre;
			delete (pos._pNode);

			return tmp;
		}

		void clear()
		{
			list tmp;
			swap(tmp);
		}

		void swap(list<T>& l)
		{
			std::swap(_pHead, l._pHead);
		}

	private:
		PNode& BuyNode(const T& val)
		{
			PNode newNode = new Node;
			newNode->_val = val;//赋值
			return newNode;
		}

		void CreateHead()
		{
			_pHead = new Node;
			_pHead->_pNext = _pHead;
			_pHead->_pPre = _pHead;
		}

		PNode _pHead;
	};

};


