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
	demo4();//�޷��������ⲿ���� "int __cdecl demo4(void)" (?demo4@@YAHXZ)������ main �������˸÷���
	//fatal error LNK1120: 1 ���޷��������ⲿ����


	return 0;
}




