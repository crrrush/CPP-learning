#define _CRT_SECURE_NO_WARNINGS


#include"date.h"


// 全缺省的构造函数
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}


// 拷贝构造函数
// d2(d1)
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day= d._day;
}


// 析构函数
Date::~Date()
{
	//cout << "~Date" << endl;
	_year = _month = _day = 0;
}


// d2 = d3 -> d2.operator=(&d2, d3)
Date& Date::operator=(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	return *this;
}

// 获取某年某月的天数
int Date::GetMonthDay(int year, int month)
{
	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
		mon[1] = 29;

	return mon[month - 1];
}

// 日期+=天数
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		//减去天数
		_day -= GetMonthDay(_year, _month);

		//进位 年/月自增
		if (_month == 12)
		{
			_year++;
			_month = 1;
		}
		else
		{
			_month++;
		}

	}
	return *this;
}

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}


// 日期+天数
Date Date::operator+(int day)
{
	Date sum(*this);
	sum += day;

	return sum;
}


// 日期-=天数
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day < 0)
	{
		if (_month == 1)
		{
			_year--;
			_month = 12;
			_day += GetMonthDay(_year, _month);
		}
		else
		{
			_month--;
			_day += GetMonthDay(_year, _month);
		}
	}
	return *this;
}

// 日期-天数
Date Date::operator-(int day)
{
	Date answer(*this);
	answer -= day;

	return answer;
}


// 前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// 后置++
Date Date::operator++(int)
{
	Date answer(*this);
	*this += 1;
	return answer;
}

// 后置--
Date Date::operator--(int)
{
	Date answer(*this);
	*this -= 1;
	return answer;
}

// 前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

// >运算符重载
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
		return true;
	else if (_year == d._year && _month > d._month)
		return true;
	else if (_year == d._year && _month == d._month && _day > d._day)
		return true;
	else
		return false;
}

// ==运算符重载
bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}

// >=运算符重载
bool Date::operator >= (const Date& d)
{
	return *this == d || *this > d;
}

// <运算符重载
bool Date::operator < (const Date& d)
{
	return !(*this >= d);
}

// <=运算符重载
bool Date::operator <= (const Date& d)
{
	return !(*this > d);
}

// !=运算符重载
bool Date::operator != (const Date& d)
{
	return !(*this == d);
}

// 日期-日期 返回天数
int Date::operator-(const Date& d)
{
	int count = 0;//第一版
	Date cd(d);
	while (cd++ < *this)
		count++;

	return count;
}
