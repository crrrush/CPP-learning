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


//struct Stu//����һ��ѧ��
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int weight;
//	int heigh;
//};
//
////���ڹ���Stu����ĺ���
//void Stu_Init()
//{}
//
//void Stu_Copy()
//{}
//
////...
//
//struct sequence_list//����һ��˳���
//{
//	int _data;
//	int _size;
//	int _capacity;
//};
//
////���ڹ���sequence_list����ĺ���
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
//	//���ڹ���Stu����ĺ���	Ҳ�г�Ա����
//	void Init()//�����������Բ�����Ҫ�������������ͻ���ر��������
//	{}
//
//	void Copy()
//	{}
//
//	//...
//
//	//��Ա����
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
//	//���ڹ���sequence_list����ĺ���	Ҳ�г�Ա����
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
//	//��Ա����
//	int _data;
//	int _size;
//	int _capacity;
//};



//class Classname//����
//{
//	//�����ﶨ����ĳ�Ա�����ͳ�Ա����
//
//};//ע�������structһ���и��ֺ�



////ȫ���Ž�������
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


////�����붨�����
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
//���涨��ɷ���ͷ�ļ�
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
////��Ա��������ֱ�ӵĶ��巽ʽ����ֵ�����
//class date
//{
//public:
//	void Init(int year)
//	{
//		//���β�����ͻ�ˣ�ʹ�������ܱ�Ť
//		//�����β���ʱ����ע���Ƿ����Ա��������ͻ
//		year = year;
//	}
//private:
//	int year;
//};
//
////���Խ�������
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
////������ʽҲ�ɣ�������ĸ��˱��ϰ�߻�˾��̹淶����
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
////������Ҫָ��Print������date�����
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
//	date._year = 2022;//error C2059: �﷨����:��.��
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
//	cout << sizeof(date) << endl;//��ṹ��һ��������ֱ��������
//	cout << sizeof(d1) << endl;
//	
//
//	return 0;
// 
//}




////��Ա�����ͳ�Ա��������
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
////ֻ�г�Ա����
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
////����
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
//	//������������������
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
	//�������������б���

	return 0;
}

