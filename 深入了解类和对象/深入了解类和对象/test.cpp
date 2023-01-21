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
//	//无参构造函数
//	date()
//	{}
//
//	//带参构造函数
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
//	//调用带参构造函数
//	d1.Print();
//
//	date d2;
//	//调用无参构造函数
//	d2.Print();
//
//	return 0;
//}


//
//int main()
//{
//	//注意：使用无参构造函数定义变量时，对象不用跟括号，否则就变成函数声明
//	//像以下代码，变成了一个名字为d的函数声明，返回值为date类，无参
//	date d();
//	//warning C4930: “date d(void)”: 未调用原型函数(是否是有意用变量定义的?)
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
//	//带参的构造函数，此时已经定义了构造函数，编译器将不再生成不带参的默认构造函数
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
//	//没有不带参的构造函数，必须传入参数初始化，此时编译不通过
//	//error C2512: “date”: 没有合适的默认构造函数可用
//	date d1;
//
//	return 0;
//}

//class date
//{
//public:
//	/*
//	//带参的构造函数，此时已经定义了构造函数，编译器将不再生成不带参的默认构造函数
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
//	//有编译器自动生成的不带参的默认构造函数，编译通过
//	date d1;
//	d1.Print();
//
//	return 0;
//}


//class Time
//{
//public:
//	//无参默认构造函数
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
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//
//	//自定义类型
//	Time _t;
//};
//
//int main()
//{
//	date d1;
//	//没有传入参数，调用类内部编译器生成无参的默认构造函数
//	//对于自定义类型成员对象，生成的默认构造函数会调用该类的无参默认构造函数
//
//	return 0;
//}


//class Time
//{
//public:
//	//无参默认构造函数
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
//	//内置类型
//	int _year = 1970;
//	int _month = 1;
//	int _day = 1;
//
//	//自定义类型
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
//	//编译不通过
//	//error C2668: “date::date”: 对重载函数的调用不明确
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
//	//析构函数
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
//	//当对象生命周期结束，编译器自动调用析构函数
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
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//
//	//自定义类型
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
//	date(const date d)//错误写法
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
//	//error C2652 : “date”: 非法的复制构造函数: 第一个参数不应是“date”
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
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//
//	//自定义类型
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
//	//构造函数，申请空间存放栈中的数据
//	Stack()
//	{
//		_array = new Datatype[16];
//		_size = 0;
//		_capacity = 16;
//	}
//
//	//析构函数，释放类对象占用资源
//	~Stack()
//	{
//		delete[] _array;
//		_size = _capacity = 0;
//	}
//
//	//将数据压入栈中
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
////一
////定义为非成员函数
////但是此时成员变量需要变成公有的，这样的设计影响了封装性，不好
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
//	//d1 == d2  编译器会解析成 operator==(d1,d2) 这样的函数调用
//	cout << (d1 == d3) << endl;
//	//同理 d1 == d3 -> operator==(d1,d3)
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
//	//二 
//	//重载为类的成员函数
//	//注意此时的函数参数表应该是	(date* const this, const date& d)
//	//左操作数为this指向调用该函数的对象	也是操作符左侧的对象
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
//	//d1 == d2  编译器会解析成 d1.operator==(d2) 变成了对象d1的成员函数调用
//	cout << (d1 == d3) << endl;
//	//同理 d1 == d3 -> d1.operator==(d3)
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
//	// 前置++（--）和后置++（--）都是一元运算符，为了让前置++（--）和后值++（--）形成正确重载
//	// C++规定：后置++重载时多增加一个int类型的参数，但调用函数时该参数不用传递，编译器自动传递
//	// 
//	// 简易演示
//	// 
//	//前置
//	//返回“+1”之后的对象	这里*this是对象，函数结束后并不会销毁，故可使用引用返回提高程序效率
//	date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//	//后置
//	//返回“+1”之前的对象	这里tmp是函数内局部变量，只能使用传值返回
//	date operator++(int)//这里只需要写入类型就能时参数表中加入int
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
//	date& operator=(const date& d)//参数为引用类型
//	{
//		if (this != &d)//避免自己给自己赋值
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;//传引用返回对象本身
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
////此时为非成员函数	没有this指针，所以得传两个参数
//date& operator=(const date& d1,const date& d2)
//{
//	if (&d1 != &d2)//避免自己给自己赋值
//	{
//		d1._year = d2._year;
//		d1._month = d2._month;
//		d1._day = d2._day;
//	}
//	return d1;//传引用返回对象本身
//}
////编译失败
////error C2801: “operator =”必须是非静态成员
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
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//
//	//自定义类型
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
//	//构造函数，申请空间存放栈中的数据
//	Stack()
//	{
//		_array = new Datatype[16];
//		_size = 0;
//		_capacity = 16;
//	}
//
//	//析构函数，释放类对象占用资源
//	~Stack()
//	{
//		delete[] _array;
//		_size = _capacity = 0;
//	}
//
//	//将数据压入栈中
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


