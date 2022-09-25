#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using std::cout;
using std::endl;
using std::cin;



void demo1()
{
	int a = 10;
	int& ra = a;//定义引用类型变量

	printf("%d\n", a);
	printf("%d\n", ra);//使用上当作变量a使用
}


void demo2()
{
	int a = 3;
	int b = 5;

	//int& ra; //这句代码编译会出错
	//error C2530: “ra”: 必须初始化引用

	int& ra1 = a;
	int& ra2 = a;
	int& ra3 = ra1;

	ra1 = b;//这句只是赋值
	//两个不相同的地址
	cout << &ra2 << endl;
	cout << &b << endl;
	cout << ra1 << endl;
	cout << ra2++ << endl;
	cout << ra3++ << endl;
	cout << a << endl;
}

void demo3()
{
	const int a = 3;
	//int& ra = a;// a是具有常属性的变量
	// error C2440: “初始化”: 无法从“const int”转换为“int &”
	const int& ra = a;

	//int& rb = 10;// 10是常量
	// error C2440: “初始化”: 无法从“int”转换为“int &”
	const int& rb = 10;
	
	double c = 3.1415;
	//int& rc = c;// 引用类型与实体类型不相同
	// error C2440: “初始化”: 无法从“double”转换为“int &”
	const int& rc = c;
	//本质上rc引用的是强制类型转换时产生的临时变量，
	//此临时变量是不能被修改的，具有常属性
}

//demo4

//做参数
void Swap(int& a, int& b)//相较于传址调用（指针）更便利
{
	int tmp = a;
	a = b;
	b = tmp;
}

//做返回值

int& Count1()//1 
{
	static int n = 0;
	//...

	return n;
}

int& Count2()//2 wrong
{
	int n = 0;
	//...
	return n;
}

//想想为什么Count2的写法是错误的
//
// 对于Count1来说，由static修饰的n的数据存放于静态区，出了函数生命周期时并不会释放该空间
// 
// 对于Count2来说，变量n的数据只是存在与Count2函数栈帧中，出了函数生命周期时，这一整块函数栈帧都会被释放
// 这就意味着这块空间随时都有可能被访问或者修改
//
// 所以，使用int&作为返回值时，对于返回的数据必须不是出了函数栈帧2就销毁的数据
// 例如全局变量，static修饰的数据，malloc申请出来的数据
//

#include<time.h>
typedef struct A
{
	int n[100000];
}A;

A a;

A test1()
{
	return a;
}

A& test2()
{
	return a;
}

void demo5()
{
	//直接以值为返回值类型
	size_t begin1 = clock();
	for (int i = 0; i < 10000; i++)
		test1();
	size_t end1 = clock();

	//以引用为返回值类型
	size_t begin2 = clock();
	for (int i = 0; i < 10000; i++)
		test2();
	size_t end2 = clock();

	cout << "test1 time: " << end1 - begin1 << "ms" << endl;
	cout << "test2 time: " << end2 - begin2 << "ms" << endl;
}

void demo6()
{
	int a = 1;

	int& ra = a;
	ra = 2;

	int* pa = &a;
	*pa = 1;


}


int main()
{
	demo6();




	return 0;
}




