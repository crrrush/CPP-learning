#define _CRT_SECURE_NO_WARNINGS


#include<iostream>

using namespace std;


//
////���ʽ1  
//1 + 3//������������Ͳ������ļӷ�������
//
////���ʽ2  
//1.0 + 3.0//ʵ���ϵ�������һ��ר����Ը���������ļӷ�������
//

//���磺
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//double Add(double a, double b)
//{
//	return a + b;
//}


////demo1
//int Add(int a, int b)
//{
//	cout << "int" << endl;
//	return a + b;
//}
//
//double Add(double a, double b)
//{
//	cout << "double" << endl;
//	return a + b;
//}
//
//
////demo2
//int sub(int a, int b)
//{
//	cout << "a - b" << endl;
//	return a - b;
//}
//
//int sub(int a, int b,int c)
//{
//	cout << "a - b - c" << endl;
//	return a - b - c;
//}
//
////demo3
//void test(int a, double b)
//{
//	cout << "int-double" << endl;
//	//...
//}
//
//void test(double a, int b)
//{
//	cout << "double-int" << endl;
//	//...
//}

//demo4
//int find(int num)
//{
//	//...
//	return 1;
//}
//
//double find(int num)//error C2556: ��double find(int)��: ���غ����롰int find(int)��ֻ���ڷ��������ϲ�ͬ
//{
//	//...
//	return 1.0;
//}


//demo5


//void Print(int num)
//{
//	//...
//}
//void Print(int) // parameter names are ignored
//{
//	//���Բ�������д�����˺���������ĺ�����������һ����
//	//...
//}
////error C2084: ������void Print(int)����������

//typedef char newchar;
//void Print(char)
//{
//	//...
//}
//void print(newchar) // char and newchar are the same type
//{
//	//...
//}
////error C2084: ������void Print(char)����������


 
//void Print(int, const char*)
//{
//	//...
//}
//// default argument doesn't change the number of parameters
//// ȱʡ������û�иı��������
//void Print(int, const char* = "")
//{
//	//,..
//}
////error C2084: ������void Print(int,const char *)����������


//// const is irrelevent for nonreference parameters
//// constֻ�����β������ͣ���û�иı��������
//void Print(short)
//{
//	//...
//}
//void Print(const short) // redeclaration
//{
//	//...
//}
////error C2084: ������void Print(short)����������


//void Test(int*)
//{
//	cout << "int*" << endl;
//}

void Test(const int*)
{
	cout << "const int*" << endl;

}


int main()
{
	//Add(1, 2);
	//Add(1.0, 2.0);
	//sub(5, 2);
	//sub(5, 2, 1);
	//test(1.0, 1);
	//test(1, 1.0);

	//Print(1);

	//const int a = 3;
	//const int* pa = &a;

	int a = 3;
	int* pa = &a;

	Test(pa);

	return 0;
}



