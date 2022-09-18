#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//
//
////C语言无法处理这样的命名冲突
//int rand = 0;
//
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
////编译错误
//// error C2365: “rand”: 重定义；以前的定义是“函数”
////  message : 参见“rand”的声明
////
//// 
////不仅仅是与库里的命名可能发生冲突
//// 实际工作中，在大的项目中，会使用很多变量、函数，命名很难做到不重复
//// C++为解决这一痛点，设计出了namespace
////


#include<stdio.h>
#include<stdlib.h>

//定义演示
// 
// 命名空间的名字通常是开发者项目名称
// 
// 1.正常的命名空间定义
//
namespace demo
{
	//命名空间可以定义变量/函数/结构体

	int rand = 0;//在这里定义的变量rand是不会与库函数rand起冲突的

	int Add(int a, int b)
	{
		return a + b;
	}

	struct S
	{
		int a;
		char b;
	};
}

//2.命名空间嵌套定义
namespace demo1
{
	int a = 0;

	namespace demo2
	{
		int b = 0;
	}
}

//同名命名空间合并
namespace demo
{
	//不止是同一个文件中，只要是在同一个工程文件中，同名的命名空间会被合并

	//这里定义了同一命名空间已定义的变量名便会报错
	//int rand = 1;
	// error C2374: “demo::rand”: 重定义；多次初始化
	//参见“demo::rand”的声明
	//
	struct S s1 = { 1,'A' };
}


//使用演示

namespace show
{
	int a = 0;
	int b = 10;

	struct S
	{
		int size;
		char* str;
	};

	int sub(int a, int b)
	{
		return a - b;
	}
	namespace min
	{
		char ch = 'A';
	}
}


//int main()
//{
//	//无法之间使用
//	//printf("%d\n", a);//报错：“a”: 未声明的标识符
//
//	return 0;
//}

//1.
//int main()
//{
//	struct show::S p = { 0,NULL };
//
//	printf("%d\n", show::a);
//	printf("%c\n", show::min::ch);
//
//	int s = show::sub(show::b, show::a);
//
//	return 0;
//}

//2.
//using show::a;
//
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", show::b);
//
//	return 0;
//}

//3.
using namespace show;

int main()
{
	a = sub(b, a);
	printf("%d %d", a, b);

	return 0;
}



