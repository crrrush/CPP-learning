#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//
//
////C�����޷�����������������ͻ
//int rand = 0;
//
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
////�������
//// error C2365: ��rand��: �ض��壻��ǰ�Ķ����ǡ�������
////  message : �μ���rand��������
////
//// 
////���������������������ܷ�����ͻ
//// ʵ�ʹ����У��ڴ����Ŀ�У���ʹ�úܶ���������������������������ظ�
//// C++Ϊ�����һʹ�㣬��Ƴ���namespace
////


#include<stdio.h>
#include<stdlib.h>

//������ʾ
// 
// �����ռ������ͨ���ǿ�������Ŀ����
// 
// 1.�����������ռ䶨��
//
namespace demo
{
	//�����ռ���Զ������/����/�ṹ��

	int rand = 0;//�����ﶨ��ı���rand�ǲ�����⺯��rand���ͻ��

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

//2.�����ռ�Ƕ�׶���
namespace demo1
{
	int a = 0;

	namespace demo2
	{
		int b = 0;
	}
}

//ͬ�������ռ�ϲ�
namespace demo
{
	//��ֹ��ͬһ���ļ��У�ֻҪ����ͬһ�������ļ��У�ͬ���������ռ�ᱻ�ϲ�

	//���ﶨ����ͬһ�����ռ��Ѷ���ı�������ᱨ��
	//int rand = 1;
	// error C2374: ��demo::rand��: �ض��壻��γ�ʼ��
	//�μ���demo::rand��������
	//
	struct S s1 = { 1,'A' };
}


//ʹ����ʾ

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
//	//�޷�֮��ʹ��
//	//printf("%d\n", a);//������a��: δ�����ı�ʶ��
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



