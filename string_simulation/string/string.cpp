#define _CRT_SECURE_NO_WARNINGS

#include"string.h"



namespace simulation
{
	string::string(const char* str)
		:_str(nullptr),
		_capacity(0),
		_size(0)
	{
		reserve(4);
		append(str);
	}

	string::string(const string& s)
		:_str(nullptr),
		_capacity(0),
		_size(0)
	{
		//int i = 0;
		//while (s[i])
		//	push_back(s[i++]);

		reserve(4);
		for (auto& e : s)
			push_back(e);

	}

	string& string::operator=(const string& s)
	{
		if (this != &s)
		{
			string tmp(s);
			swap(tmp);
		}
		return *this;
	}

	string::~string()
	{
		delete[] _str;
		_size = _capacity = 0;
	}


	//////////////////////////////////////////////////////////////
	// iterator

	string::iterator string::begin()
	{
		return _str;
	}

	string::iterator string::end()
	{
		return _str + _size;
	}

	string::const_iterator string::begin() const
	{
		return _str;
	}

	string::const_iterator string::end() const
	{
		return _str + _size;
	}


	/////////////////////////////////////////////////////////////

	// modify

	void string::push_back(char c)
	{
		if (_size + 1 >= _capacity)
		{
			//size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
			size_t newcap = 2 * _capacity;
			reserve(newcap);
		}
		_str[_size++] = c;
		_str[_size] = '\0';
	}

	string& string::operator+=(char c)
	{
		push_back(c);
		return *this;
	}

	void string::append(const char* str)
	{
		while (*str)
			push_back(*str++);
	}

	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	void string::clear()
	{
		_size = 0;
	}

	void string::swap(string& s)
	{
		//string tmp(s);
		//s = *this;
		//*this = tmp;

		//char* tmp = s._str;
		//size_t captmp = s._capacity;
		//size_t sztmp = s._size;
		//
		//s._str = _str;
		//s._capacity = _capacity;
		//s._size= _size;
		//
		//_str = tmp;
		//_size = sztmp;
		//_capacity = captmp;

		std::swap(_str, s._str);
		std::swap(_size, s._size);
		std::swap(_capacity, s._capacity);
	}

	const char* string::c_str() const
	{
		return _str;
	}


	///////////////////////////////////////////////////////////////
	//// capacity

	size_t string::size() const
	{
		return _size;
	}

	size_t string::capacity() const
	{
		return _capacity;
	}

	bool string::empty() const
	{
		return _size == 0;
	}

	void string::resize(size_t n, char c)
	{
		if (n > _capacity)
			reserve(n + 1);

		size_t i = n;
		_str[i] = '\0';
		while (i-- > _size)
			_str[i] = c;

		_size = n;
	}

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			size_t newcap = 4;
			while (newcap < n)
				newcap *= 2;

			char* newstr = new char[newcap];
			memcpy(newstr, _str, _capacity);

			delete[] _str;
			_str = newstr;
			_capacity = newcap - 1;
		}
	}



	///////////////////////////////////////////////////////////////
	//// access

	char& string::operator[](size_t index)
	{
		assert(index < _size);
		return _str[index];
	}

	const char& string::operator[](size_t index) const
	{
		assert(index < _size);
		return _str[index];
	}


	///////////////////////////////////////////////////////////////
	////relational operators

	bool string::operator<(const string& s)
	{
		return strcmp(_str, s._str) < 0;
	}

	bool string::operator<=(const string& s)
	{
		return strcmp(_str, s._str) <= 0;
	}

	bool string::operator>(const string& s)
	{
		return strcmp(_str, s._str) > 0;
	}

	bool string::operator>=(const string& s)
	{
		return strcmp(_str, s._str) >= 0;
	}

	bool string::operator==(const string& s)
	{
		return strcmp(_str, s._str) == 0;
	}

	bool string::operator!=(const string& s)
	{
		return !(*this == s);
	}


	//// 返回c在string中第一次出现的位置
	size_t string::find(char c, size_t pos) const
	{
		assert(pos < _size);//不超过有效位置

		while (_str[pos] != c && pos < _size)
			++pos;

		if (pos == _size)
			return npos;
		else
			return pos;

	}

	//// 返回子串s在string中第一次出现的位置
	size_t string::find(const char* s, size_t pos) const
	{
		assert(pos < _size);//不超过有效位置

		while (strncmp((_str + pos), s, strlen(s)) && pos < _size)
			++pos;

		if (pos == _size)
			return npos;
		else
			return pos;
	}

	//// 在pos位置上插入字符c/字符串str
	string& string::insert(size_t pos, char c)
	{
		assert(pos < _size);//不超过有效位置

		if (_size + 1 >= _capacity)
		{
			//size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
			size_t newcap = 2 * _capacity;
			reserve(newcap);
		}
		size_t i = ++_size;
		while (i > pos)
		{
			_str[i] = _str[i - 1];
			--i;
		}

		_str[pos] = c;
		return *this;
	}

	string& string::insert(size_t pos, const char* str)
	{
		assert(pos < _size);//不超过有效位置

		int len = strlen(str);
		if (_size + len >= _capacity)
		{
			//size_t newcap = _capacity == 0 ? 4 : 2 * _capacity;
			size_t newcap = _capacity + len;
			reserve(newcap);
		}
		_size += len;
		size_t i = _size;
		while (i >= pos + len && i < _capacity)
		{
			_str[i] = _str[i - len];
			--i;
		}
		while (i >= pos && i < _capacity)
		{
			_str[i] = str[i - pos];
			--i;
		}

		return *this;
	}



	//// 删除pos位置上的元素
	string& string::erase(size_t pos, size_t len)
	{
		assert(pos < _size);//不超过有效位置

		//size_t i = pos;
		while (pos + len <= _size)
		{
			_str[pos] = _str[pos + len];
			++pos;
		}
		_size -= len;
		return *this;
	}




	ostream& operator<<(ostream& _cout, const string& s)
	{
		_cout << s._str;
		return _cout;
	}
	istream& operator>>(istream& _cin, string& s)
	{
		char buf[24];
		//缓冲区
		memset(buf, '\0', 24);//初始化缓冲区
		int i = 0;
		s.resize(0);
		while ((buf[i] = getchar()) != ' ' && buf[i] != '\n')
		{
			if (i == 22)
			{
				s += buf;
				i = 0;
			}
			else
				++i;
		}
		if (i != 0)//刷新缓冲区
		{
			buf[i] = '\0';
			s += buf;
		}

		return _cin;
	}
}