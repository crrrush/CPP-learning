#define _CRT_SECURE_NO_WARNINGS


#include"date.h"


// ȫȱʡ�Ĺ��캯��
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
		cout << "������Υ��,�޷���ֵ" << endl;
	}
}


// �������캯��
// d2(d1)
//Date::Date(const Date& d)
//{
//	_year = d._year;
//	_month = d._month;
//	_day= d._day;
//}


//// ��������
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

// ��ȡĳ��ĳ�µ�����
int Date::GetMonthDay(int year, int month)
{
	//int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
	//	mon[1] = 29;

	//return mon[month - 1];

	//�Ż�
	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((month == 1) && ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0))
		return mon[1] + 1;

	return mon[month - 1];

}

// ����+=����
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
		//��ȥ����
		_day -= GetMonthDay(_year, _month);

		//��λ ��/������
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


// ����+����
Date Date::operator+(int day) const
{
	Date sum(*this);
	sum += day;

	return sum;
}


// ����-=����
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
			_month = 12;//��λ
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

// ����-����
Date Date::operator-(int day) const
{
	Date answer(*this);
	answer -= day;

	return answer;
}


// ǰ��++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// ����++
Date Date::operator++(int)
{
	Date answer(*this);
	*this += 1;
	return answer;
}

// ����--
Date Date::operator--(int)
{
	Date answer(*this);
	*this -= 1;
	return answer;
}

// ǰ��--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

// >���������
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

// ==���������
bool Date::operator==(const Date& d) const
{
	return _year == d._year && _month == d._month && _day == d._day;
}

// >=���������
bool Date::operator >= (const Date& d) const
{
	return *this == d || *this > d;
}

// <���������
bool Date::operator < (const Date& d) const
{
	return !(*this >= d);
}

// <=���������
bool Date::operator <= (const Date& d) const
{
	return !(*this > d);
}

// !=���������
bool Date::operator != (const Date& d) const
{
	return !(*this == d);
}

// ����-���� ��������
int Date::operator-(const Date& d) const
{
	//int count = 0;//��һ��
	//Date cd(d);
	//while (cd++ < *this)
	//	count++;

	int count = 0;//�ڶ���
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
//	cout << d._year << "��" << d._month << "��" << d._day << "��";
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
	// ��潨���inline ��û�����ͼ��
	//return cin;
}




