#define _CRT_SECURE_NO_WARNINGS

#include"test.h"


//class date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	date d1;
//	d1.Init(2023, 1, 1);
//	d1.Print();
//
//	date d2;
//	d2.Init(2023, 1, 7);
//	d2.Print();
//
//	return 0;
//}

//class date
//{
//public:
//	//�޲ι��캯��
//	date()
//	{}
//
//	//���ι��캯��
//	date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1(2022, 12, 31);
//	//���ô��ι��캯��
//	d1.Print();
//
//	date d2;
//	//�����޲ι��캯��
//	d2.Print();
//
//	return 0;
//}


//
//int main()
//{
//	//ע�⣺ʹ���޲ι��캯���������ʱ�������ø����ţ�����ͱ�ɺ�������
//	//�����´��룬�����һ������Ϊd�ĺ�������������ֵΪdate�࣬�޲�
//	date d();
//	//warning C4930: ��date d(void)��: δ����ԭ�ͺ���(�Ƿ��������ñ��������?)
//
//	return 0;
//}


//class date
//{
//public:
//	date(int* year = (int*)malloc(4), int* month = new int, int day = 1)
//	{
//		_year = *year;
//		_month = *month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1;
//	d1.Print();
//
//	return 0;
//}



//class date
//{
//public:
//	//���εĹ��캯������ʱ�Ѿ������˹��캯�������������������ɲ����ε�Ĭ�Ϲ��캯��
//	date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//û�в����εĹ��캯�������봫�������ʼ������ʱ���벻ͨ��
//	//error C2512: ��date��: û�к��ʵ�Ĭ�Ϲ��캯������
//	date d1;
//
//	return 0;
//}

//class date
//{
//public:
//	/*
//	//���εĹ��캯������ʱ�Ѿ������˹��캯�������������������ɲ����ε�Ĭ�Ϲ��캯��
//	date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//�б������Զ����ɵĲ����ε�Ĭ�Ϲ��캯��������ͨ��
//	date d1;
//	d1.Print();
//
//	return 0;
//}


//class Time
//{
//public:
//	//�޲�Ĭ�Ϲ��캯��
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_min = 0;
//		_sec = 0;
//	}
//private:
//	int _hour;
//	int _min;
//	int _sec;
//};
//
//class date
//{
//private:
//	//��������
//	int _year;
//	int _month;
//	int _day;
//
//	//�Զ�������
//	Time _t;
//};
//
//int main()
//{
//	date d1;
//	//û�д���������������ڲ������������޲ε�Ĭ�Ϲ��캯��
//	//�����Զ������ͳ�Ա�������ɵ�Ĭ�Ϲ��캯������ø�����޲�Ĭ�Ϲ��캯��
//
//	return 0;
//}


//class Time
//{
//public:
//	//�޲�Ĭ�Ϲ��캯��
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_min = 0;
//		_sec = 0;
//	}
//private:
//	int _hour;
//	int _min;
//	int _sec;
//};
//
//class date
//{
//public:
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	//��������
//	int _year = 1970;
//	int _month = 1;
//	int _day = 1;
//
//	//�Զ�������
//	Time _t;
//};
//
//int main()
//{
//	date d1;
//	d1.Print();
//
//	return 0;
//}

//class date
//{
//public:
//	date()
//	{
//		_year = _month = _day = 0;
//	}
//
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1;
//	//���벻ͨ��
//	//error C2668: ��date::date��: �����غ����ĵ��ò���ȷ
//
//	return 0;
//}



//class date
//{
//public:
//	void Print()
//	{
//		cout << *_year << "/" << *_month << "/" << _day << endl;
//	}
//private:
//	int* _year = (int*)malloc(sizeof(int));
//	int* _month = new int;
//	int _day = 1;
//};
//
//int main()
//{
//	date d1;
//	d1.Print();
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};


//int* Crate()
//{
//	return new int;
//}
//
//class date
//{
//public:
//	void Print()
//	{
//		cout << *_year << "/" << *_month << "/" << *_day << endl;
//	}
//private:
//	int* _year = (int*)malloc(sizeof(int));
//	int* _month = new int;
//	int* _day = Crate();
//};
//
//
//int main()
//{
//	date d1;
//	d1.Print();
//
//	return 0;
//}


//class date
//{
//public:
//	//��������
//	~date()
//	{
//		cout << "~date()" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void test()
//{
//	date d1;
//	//�������������ڽ������������Զ�������������
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}



//class Time
//{
//public:
//	~Time()
//	{
//		cout << "~Time()" << endl;
//	}
//private:
//	int _h;
//	int _m;
//	int _s;
//};
//
//class date
//{
//private:
//	//��������
//	int _year;
//	int _month;
//	int _day;
//
//	//�Զ�������
//	Time _t;
//};
//
//int main()
//{
//	date d1;
//
//	return 0;
//}




//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	date(const date d)//����д��
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1;
//	date d2(d1);
//	//error C2652 : ��date��: �Ƿ��ĸ��ƹ��캯��: ��һ��������Ӧ�ǡ�date��
//
//	return 0;
//}



//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	date(const date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1;
//	date d2(d1);
//	
//
//	return 0;
//}


//class Time
//{
//public:
//	Time()
//	{
//		_h = _m = _s = 0;
//	}
//
//	Time(const Time& t)
//	{
//		_h = t._h;
//		_m = t._m;
//		_s = t._s;
//		cout << "Time::Time(const Time& t)" << endl;
//	}
//	
//	void Print()
//	{
//		cout << _h << ":" << _m << ":" << _s << endl;
//	}
//
////private:
//	int _h;
//	int _m;
//	int _s;
//};
//
//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		_t._h = _t._m = _t._s = 1;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//		_t.Print();
//	}
//		
//private:
//	//��������
//	int _year;
//	int _month;
//	int _day;
//
//	//�Զ�������
//	Time _t;
//};
//
//int main()
//{
//	date d1(2023, 1, 1);
//	date d2(d1);
//	d2.Print();
//
//	return 0;
//}


//typedef int Datatype;
//class Stack
//{
//public:
//	//���캯��������ռ���ջ�е�����
//	Stack()
//	{
//		_array = new Datatype[16];
//		_size = 0;
//		_capacity = 16;
//	}
//
//	//�����������ͷ������ռ����Դ
//	~Stack()
//	{
//		delete[] _array;
//		_size = _capacity = 0;
//	}
//
//	//������ѹ��ջ��
//	void push(const Datatype& x)
//	{
//		_array[_size++] = x;
//	}
//
//private:
//	Datatype* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
//int main()
//{
//	Stack st1;
//	st1.push(1);
//	st1.push(2);
//	st1.push(3);
//	st1.push(4);
//
//	Stack st2(st1);
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		cout << "date(int year, int month, int day)" << this << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	date(const date& d)
//	{
//		cout << "date(const date& d)" << this << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	~date()
//	{
//		cout << "~date()" << this << endl;
//	}
//
//	void  Print() { cout << _year << "/" << _month << "/" << _day << endl; }
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////date test(date d)
////{
////	date tmp(d);
////	return tmp;
////}
//
//date test()
//{
//	date tmp(1,1,1);
//	cout << &tmp << endl;
//	return tmp;
//}
//
//int main()
//{
//	//date d1;
//	date d1(test());
//	cout << &d1 << endl;
//	d1.Print();
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		cout << "date(int year, int month, int day)" << this << endl;
//	}
//
//	date(const date& d)
//	{
//		cout << "date(const date& d)" << this << endl;
//	}
//
//	~date()
//	{
//		cout << "~date()" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//date test(date d)
//{
//	return d;
//}
//
//int main()
//{
//	date d1;
//	test(d1);
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////һ
////����Ϊ�ǳ�Ա����
////���Ǵ�ʱ��Ա������Ҫ��ɹ��еģ����������Ӱ���˷�װ�ԣ�����
//bool operator==(const date& d1, const date& d2)
//{
//	return d1._year == d2._year 
//		&& d1._month == d2._month 
//		&& d1._day == d2._day;
//}
//
//int main()
//{
//	date d1(20231, 1, 1);
//	date d2(20231, 1, 1);
//	date d3;
//
//	cout << (d1 == d2) << endl;
//	//d1 == d2  ������������� operator==(d1,d2) �����ĺ�������
//	cout << (d1 == d3) << endl;
//	//ͬ�� d1 == d3 -> operator==(d1,d3)
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//�� 
//	//����Ϊ��ĳ�Ա����
//	//ע���ʱ�ĺ���������Ӧ����	(date* const this, const date& d)
//	//�������Ϊthisָ����øú����Ķ���	Ҳ�ǲ��������Ķ���
//	bool operator==(const date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1(20231, 1, 1);
//	date d2(20231, 1, 1);
//	date d3;
//
//	cout << (d1 == d2) << endl;
//	//d1 == d2  ������������� d1.operator==(d2) ����˶���d1�ĳ�Ա��������
//	cout << (d1 == d3) << endl;
//	//ͬ�� d1 == d3 -> d1.operator==(d3)
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 
//	// ǰ��++��--���ͺ���++��--������һԪ�������Ϊ����ǰ��++��--���ͺ�ֵ++��--���γ���ȷ����
//	// C++�涨������++����ʱ������һ��int���͵Ĳ����������ú���ʱ�ò������ô��ݣ��������Զ�����
//	// 
//	// ������ʾ
//	// 
//	//ǰ��
//	//���ء�+1��֮��Ķ���	����*this�Ƕ��󣬺��������󲢲������٣��ʿ�ʹ�����÷�����߳���Ч��
//	date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//	//����
//	//���ء�+1��֮ǰ�Ķ���	����tmp�Ǻ����ھֲ�������ֻ��ʹ�ô�ֵ����
//	date operator++(int)//����ֻ��Ҫд�����;���ʱ�������м���int
//	{
//		date tmp(*this);
//		_day += 1;
//		return *this;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1(20231, 1, 1);
//	date d2 = ++d1;
//	date d3 = d1++;
//
//	d1.Print();
//	d2.Print();
//	d3.Print();
//
//	return 0;
//}



//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	date(const date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	date& operator=(const date& d)//����Ϊ��������
//	{
//		if (this != &d)//�����Լ����Լ���ֵ
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;//�����÷��ض�����
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////��ʱΪ�ǳ�Ա����	û��thisָ�룬���Եô���������
//date& operator=(const date& d1,const date& d2)
//{
//	if (&d1 != &d2)//�����Լ����Լ���ֵ
//	{
//		d1._year = d2._year;
//		d1._month = d2._month;
//		d1._day = d2._day;
//	}
//	return d1;//�����÷��ض�����
//}
////����ʧ��
////error C2801: ��operator =�������ǷǾ�̬��Ա
//
//
//int main()
//{
//
//
//	return 0;
//}



//class Time
//{
//public:
//	Time& operator=(const Time& t)
//	{
//		if (this != &t)
//		{
//			_h = t._h;
//			_m = t._m;
//			_s = t._s;
//			cout << "Time::operator=(const Time& t)" << endl;
//		}
//		return *this;
//	}
//
//private:
//	int _h;
//	int _m;
//	int _s;
//};
//
//class date
//{		
//private:
//	//��������
//	int _year;
//	int _month;
//	int _day;
//
//	//�Զ�������
//	Time _t;
//};
//
//int main()
//{
//	date d1;
//	date d2;
//	d2 = d1;
//
//	return 0;
//}

//typedef int Datatype;
//class Stack
//{
//public:
//	//���캯��������ռ���ջ�е�����
//	Stack()
//	{
//		_array = new Datatype[16];
//		_size = 0;
//		_capacity = 16;
//	}
//
//	//�����������ͷ������ռ����Դ
//	~Stack()
//	{
//		delete[] _array;
//		_size = _capacity = 0;
//	}
//
//	//������ѹ��ջ��
//	void push(const Datatype& x)
//	{
//		_array[_size++] = x;
//	}
//
//private:
//	Datatype* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
//int main()
//{
//	Stack st1;
//	st1.push(1);
//	st1.push(2);
//	st1.push(3);
//	st1.push(4);
//
//	Stack st2;
//	st2 = st1;
//
//	return 0;
//}


//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	void Print(/* const date* const this */) const
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1(2023, 1, 1);
//
//	return 0;
//}

//class date
//{
//public:
//	date(int year = 1970, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		test();
//		cout << "Print()" << endl;
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	void Print() const
//	{
//		cout << "Print() const" << endl;
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	void test() const
//	{
//		cout << "test()" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1(2023, 1, 1);
//	const date d2(2023, 1, 1);
//
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}


class date
{
public:
	date* operator&()
	{
		return this;
	}

	const date* operator&() const
	{
		return this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{


	return 0;
}


