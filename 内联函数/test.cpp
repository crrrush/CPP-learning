#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;


//inline void demo1()
//{
//	cout << "inline function" << endl;
//}
//
//void demo2()
//{
//	cout << "function" << endl;
//}
//
//int main()
//{
//	demo1();
//
//	demo2();
//
//	return 0;
//}
//

#include"Inline.h"

int main()
{
	demo4();//无法解析的外部符号 "int __cdecl demo4(void)" (?demo4@@YAHXZ)，函数 main 中引用了该符号
	//fatal error LNK1120: 1 个无法解析的外部命令


	return 0;
}




