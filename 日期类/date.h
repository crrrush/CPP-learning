#pragma once

#include<iostream>

using std::cout;
using std::endl;
using std::cin;


class Date
{
public:
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1970, int month = 1, int day = 1);


	// �������캯��
    // d2(d1)
	Date(const Date& d);

	// ��������
	~Date();

	void Print();

	// ��ֵ���������

	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);

    // d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d);

	// ����+=����
	Date& operator+=(int day);

	// ����+����
	Date operator+(int day);

	// ����-����
	Date operator-(int day);

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
	bool operator>(const Date& d);

	// ==���������
	bool operator==(const Date& d);

	// >=���������
	bool operator >= (const Date& d);


	// <���������
	bool operator < (const Date& d);

	// <=���������
	bool operator <= (const Date& d);

	// !=���������
	bool operator != (const Date& d);

	// ����-���� ��������
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};
