#pragma once

#include<iostream>

using std::cout;
using std::endl;
using std::cin;
using std::iostream;
using std::ostream;
using std::istream;

//using namespace std;

//class A
//{
//public:
//	A(int n)
//		:_n(n)
//	{}
//
//
//private:
//	int _n;
//};

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	//friend istream& operator>>(istream& in, Date& d);
public:
	// 全缺省的构造函数
	Date(int year = 1970, int month = 1, int day = 1);


	// 拷贝构造函数
    // d2(d1)
	//Date(const Date& d);

	// 析构函数
	//~Date();

	//void Print();



	// 赋值运算符重载

	// 获取某年某月的天数
	int GetMonthDay(int year, int month);

    // d2 = d3 -> d2.operator=(&d2, d3)
	//Date& operator=(const Date& d);

	// 日期+=天数
	Date& operator+=(int day);

	// 日期+天数
	Date operator+(int day) const;

	// 日期-天数
	Date operator-(int day) const;

	// 日期-=天数
	Date& operator-=(int day);

	// 前置++
	Date& operator++();

	// 后置++
	Date operator++(int);

	// 后置--
	Date operator--(int);

	// 前置--
	Date& operator--();

	// >运算符重载
	bool operator>(const Date& d) const;

	// ==运算符重载
	bool operator==(const Date& d) const;

	// >=运算符重载
	bool operator >= (const Date& d) const;


	// <运算符重载
	bool operator < (const Date& d) const;

	// <=运算符重载
	bool operator <= (const Date& d) const;

	// !=运算符重载
	bool operator != (const Date& d) const;

	// 日期-日期 返回天数
	int operator-(const Date& d) const;

private:
	int _year;
	int _month;
	int _day;
};

istream& operator>>(istream& in, Date& d);

inline ostream& operator<<(ostream& out, const Date& d)
{
	cout << d._year << "年" << d._month << "月" << d._day << "日";
	return out;
}


//inline istream& operator>>(istream& in, Date& d)
//{
//	int year, month, day;
//
//	cin >> year;
//	cin >> month;
//	cin >> day;
//
//	Date tmp(year, month, day);
//
//	d = tmp;
//
//	return cin;
//
//	//cin >> d._year;
//	//cin >> d._month;
//	//cin >> d._day;
//	// 这版建议加inline 但没有类型检查
//	//return cin;
//}
//

