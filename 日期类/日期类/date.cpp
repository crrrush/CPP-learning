#define _CRT_SECURE_NO_WARNINGS


#include"date.h"


// 全缺省的构造函数
Date::Date(int year, int month, int day)
	:_year(1970),
	_month(1),
	_day(1)
{
	if (year >= 1 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "该日期违法,无法赋值" << endl;
	}
}


// 拷贝构造函数
// d2(d1)
//Date::Date(const Date& d)
//{
//	_year = d._year;
//	_month = d._month;
//	_day= d._day;
//}


//// 析构函数
//Date::~Date()
//{
//	//cout << "~Date" << endl;
//	_year = _month = _day = 0;
//}


// d2 = d3 -> d2.operator=(&d2, d3)
//Date& Date::operator=(const Date& d)
//{
//	if (this != &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	return *this;
//}

// 获取某年某月的天数
int Date::GetMonthDay(int year, int month)
{
	//int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
	//	mon[1] = 29;

	//return mon[month - 1];

	//优化
	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((month == 1) && ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0))
		return mon[1] + 1;

	return mon[month - 1];

}

// 日期+=天数
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		*this -= -day;
		return *this;
	}
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

//void Date::Print()
//{
//	cout << _year << "/" << _month << "/" << _day << endl;
//}


// 日期+天数
Date Date::operator+(int day) const
{
	Date sum(*this);
	sum += day;

	return sum;
}


// 日期-=天数
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		*this += -day;
		return *this;
	}
	_day -= day;
	while (_day < 0)
	{
		if (_month == 1)
		{
			_year--;
			_month = 12;//复位
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
Date Date::operator-(int day) const
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
bool Date::operator>(const Date& d) const
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
bool Date::operator==(const Date& d) const
{
	return _year == d._year && _month == d._month && _day == d._day;
}

// >=运算符重载
bool Date::operator >= (const Date& d) const
{
	return *this == d || *this > d;
}

// <运算符重载
bool Date::operator < (const Date& d) const
{
	return !(*this >= d);
}

// <=运算符重载
bool Date::operator <= (const Date& d) const
{
	return !(*this > d);
}

// !=运算符重载
bool Date::operator != (const Date& d) const
{
	return !(*this == d);
}

// 日期-日期 返回天数
int Date::operator-(const Date& d) const
{
	//int count = 0;//第一版
	//Date cd(d);
	//while (cd++ < *this)
	//	count++;

	int count = 0;//第二版
	Date max = *this;
	Date min = d;
	if (max < min)
		while (max++ < min)
			count--;
	else
		while (min++ < max)
			count++;

	return count;
}

//
//ostream& operator<<(ostream& out, Date& d)
//{
//	cout << d._year << "年" << d._month << "月" << d._day << "日";
//	return out;
//}
//


istream& operator>>(istream& in, Date& d)
{
	int year, month, day;
	cin >> year >> month >> day;
	Date tmp(year, month, day);
	d = tmp;

	return cin;
	//cin >> d._year;
	//cin >> d._month;
	//cin >> d._day;
	// 这版建议加inline 但没有类型检查
	//return cin;
}




