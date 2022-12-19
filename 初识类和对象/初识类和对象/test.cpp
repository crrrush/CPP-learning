#define _CRT_SECURE_NO_WARNINGS

#include"test.h"

//class T
//{
//public:
//	T()
//	{
//		cout << "T()" << endl;
//	}
//
//	~T()
//	{
//		cout << "~T()" << endl;
//	}
//
//	T(const T& t)
//	{
//		cout << "T(const T& t)" << endl;
//	}
//
//
//
//private:
//
//};
//
//class A
//{
//public:
//
//
//private:
//	T _a;
//};
//
//
//int main()
//{
//	T a;
//	T b(a);
//
//	A a1;
//	A a2(a1);
//
//
//
//	return 0;
//}


//struct Stu//描述一个学生
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int weight;
//	int heigh;
//};
//
////用于管理Stu对象的函数
//void Stu_Init()
//{}
//
//void Stu_Copy()
//{}
//
////...
//
//struct sequence_list//描述一个顺序表
//{
//	int _data;
//	int _size;
//	int _capacity;
//};
//
////用于管理sequence_list对象的函数
//void Slist_Init()
//{}
//
//void Slist_Push_Back()
//{}
//
//void Slist_Pop_Back()
//{}
//
//void Slist_Destroy()
//{}
//
////...
//


//struct Stu
//{
//	//用于管理Stu对象的函数	也叫成员函数
//	void Init()//函数命名可以不再需要因需避免命名冲突而特别加上类名
//	{}
//
//	void Copy()
//	{}
//
//	//...
//
//	//成员变量
//	char name[20];
//	char sex[5];
//	int age;
//	int weight;
//	int heigh;
//};
//
//
//struct sequence_list
//{
//	//用于管理sequence_list对象的函数	也叫成员函数
//	void Init()
//	{}
//
//	void Push_Back()
//	{}
//
//	void Pop_Back()
//	{}
//
//	void Destroy()
//	{}
//
//	//...
//
//	//成员变量
//	int _data;
//	int _size;
//	int _capacity;
//};



//class Classname//类名
//{
//	//在这里定义类的成员变量和成员函数
//
//};//注意这里和struct一样有个分号



////全部放进类体中
//class sqlist
//{
//public:
//	void Init()
//	{
//		//...
//	}
//
//	void Push_Back()
//	{
//		//...
//	}
//
//	void Pop_Back()
//	{
//		//...
//	}
//
//	void Destroy()
//	{
//		//...
//	}
//
//private:
//	int _data;
//	int _size;
//	int _capacity;
//};


////声明与定义分离
//struct sqlist
//{
//public:
//	void Slist_Init();
//
//	void Slist_Push_Back();
//
//	void Slist_Pop_Back();
//
//	void Slist_Destroy();
//
//private:
//	int _data;
//	int _size;
//	int _capacity;
//};
//
//下面定义可放至头文件
//void sqlist::Slist_Init()
//{
//	//...
//}
//
//void sqlist::Slist_Push_Back()
//{
//	//...
//}
//
//void sqlist::Slist_Pop_Back()
//{
//	//...
//}
//
//void sqlist::Slist_Destroy()
//{
//	//...
//}

//
////成员变量这样直接的定义方式会出现的问题
//class date
//{
//public:
//	void Init(int year)
//	{
//		//与形参名冲突了，使用起来很别扭
//		//命名形参名时还需注意是否与成员变量名冲突
//		year = year;
//	}
//private:
//	int year;
//};
//
////所以建议这样
//class date
//{
//public:
//	void Init(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//
////其他方式也可，依据你的个人编程习惯或公司编程规范而定
//


//class date
//{
//public:
//	void Print();
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////这里需要指定Print是属于date类域的
//void date::Print()
//{
//	cout << _year << "." << _month << "." << _day;
//}

//
//class date
//{
//public:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	date._year = 2022;//error C2059: 语法错误:“.”
//
//	return 0;
//}


//class date
//{
//public:
//	void Print();
//
//public:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void date::Print()
//{
//	cout << _year << "." << _month << "." << _day;
//}
//
//
//int main()
//{
//	date d1;
//	d1._year = 1970;
//	d1._month = 1;
//	d1._day = 1;
//
//	d1.Print();
//
//	return 0;
//}




//class date
//{
//public:
//	void Print()
//	{
//		cout << _year << "." << _month << "." << _day;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
////class date
////{
////private:
////	int _year;
////	int _month;
////	int _day;
////};
//
//
//int main()
//{
//	date d1;
//
//	cout << sizeof(date) << endl;//与结构体一样，可以直接用类名
//	cout << sizeof(d1) << endl;
//	
//
//	return 0;
// 
//}




////成员变量和成员函数都有
//class demo1
//{
//public:
//	void test()
//	{
//		cout << "test" << endl;
//	}
//private:
//	char _a;
//};
//
////只有成员函数
//class demo2
//{
//public:
//	void test()
//	{
//		cout << "test" << endl;
//	}
//};
//
//
////空类
//class demo3
//{
//};
//
//int main()
//{
//	cout << sizeof(demo1) << endl;
//	cout << sizeof(demo2) << endl;
//	cout << sizeof(demo3) << endl;
//
//	return 0;
//}


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
//	void Print(/*date* const this*/)
//	{
//		cout << this->_year << "." << this->_month << "." << this->_day << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//

class date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "." << _month << "." << _day << endl;
	}


private:
	int _year;
	int _month;
	int _day;
};


//int main()
//{
//	date d1, d2;
//	d1.Init(2022, 12, 31);
//	d2.Init(2023, 1, 1);
//
//
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

//class demo4
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	demo4* p = nullptr;
//	p->Print();
//	//编译正常，运行正常
// 
//	return 0;
//}

class demo4
{
public:
	void Print()
	{
		cout << _a << endl;
	}
private:
	int _a;
};

int main()
{
	demo4* p = nullptr;
	p->Print();
	//编译正常，运行崩溃

	return 0;
}

