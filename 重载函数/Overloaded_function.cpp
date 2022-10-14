#define _CRT_SECURE_NO_WARNINGS


#include<iostream>

using namespace std;


//
////表达式1  
//1 + 3//调用了针对整型操作数的加法操作符
//
////表达式2  
//1.0 + 3.0//实际上调用了另一个专门针对浮点操作数的加法操作符
//

//例如：
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
//double find(int num)//error C2556: “double find(int)”: 重载函数与“int find(int)”只是在返回类型上不同
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
//	//忽略参数名的写法，此函数与上面的函数参数表是一样的
//	//...
//}
////error C2084: 函数“void Print(int)”已有主体

//typedef char newchar;
//void Print(char)
//{
//	//...
//}
//void print(newchar) // char and newchar are the same type
//{
//	//...
//}
////error C2084: 函数“void Print(char)”已有主体


 
//void Print(int, const char*)
//{
//	//...
//}
//// default argument doesn't change the number of parameters
//// 缺省参数并没有改变参数类型
//void Print(int, const char* = "")
//{
//	//,..
//}
////error C2084: 函数“void Print(int,const char *)”已有主体


//// const is irrelevent for nonreference parameters
//// const只是修饰参数类型，并没有改变参数类型
//void Print(short)
//{
//	//...
//}
//void Print(const short) // redeclaration
//{
//	//...
//}
////error C2084: 函数“void Print(short)”已有主体


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



