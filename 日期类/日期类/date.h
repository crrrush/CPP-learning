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
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1970, int month = 1, int day = 1);


	// �������캯��
    // d2(d1)
	//Date(const Date& d);

	// ��������
	//~Date();

	//void Print();



	// ��ֵ���������

	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);

    // d2 = d3 -> d2.operator=(&d2, d3)
	//Date& operator=(const Date& d);

	// ����+=����
	Date& operator+=(int day);

	// ����+����
	Date operator+(int day) const;

	// ����-����
	Date operator-(int day) const;

	// ����-=����
	Date& operator-=(int day);

	// ǰ��++
	Date& operator++();

	// ����++
	Date operator++(int);

	// ����--
	Date operator--(int);

	// ǰ��--
	Date& operator--();

	// >���������
	bool operator>(const Date& d) const;

	// ==���������
	bool operator==(const Date& d) const;

	// >=���������
	bool operator >= (const Date& d) const;


	// <���������
	bool operator < (const Date& d) const;

	// <=���������
	bool operator <= (const Date& d) const;

	// !=���������
	bool operator != (const Date& d) const;

	// ����-���� ��������
	int operator-(const Date& d) const;

private:
	int _year;
	int _month;
	int _day;
};

istream& operator>>(istream& in, Date& d);

inline ostream& operator<<(ostream& out, const Date& d)
{
	cout << d._year << "��" << d._month << "��" << d._day << "��";
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
//	// ��潨���inline ��û�����ͼ��
//	//return cin;
//}
//

