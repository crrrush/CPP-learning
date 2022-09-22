#define _CRT_SECURE_NO_WARNINGS


#include"Funtion.h"

//void func(int a = 0, int b = 1)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

void func1(int a = 0, int b = 1, int c = 2)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void func2(int a, int b = 1, int c = 2)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	//func1();
	//func2(0);

	return 0;
}
