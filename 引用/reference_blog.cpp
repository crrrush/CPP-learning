#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using std::cout;
using std::endl;
using std::cin;



void demo1()
{
	int a = 10;
	int& ra = a;//�����������ͱ���

	printf("%d\n", a);
	printf("%d\n", ra);//ʹ���ϵ�������aʹ��
}


void demo2()
{
	int a = 3;
	int b = 5;

	//int& ra; //�������������
	//error C2530: ��ra��: �����ʼ������

	int& ra1 = a;
	int& ra2 = a;
	int& ra3 = ra1;

	ra1 = b;//���ֻ�Ǹ�ֵ
	//��������ͬ�ĵ�ַ
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
	//int& ra = a;// a�Ǿ��г����Եı���
	// error C2440: ����ʼ����: �޷��ӡ�const int��ת��Ϊ��int &��
	const int& ra = a;

	//int& rb = 10;// 10�ǳ���
	// error C2440: ����ʼ����: �޷��ӡ�int��ת��Ϊ��int &��
	const int& rb = 10;
	
	double c = 3.1415;
	//int& rc = c;// ����������ʵ�����Ͳ���ͬ
	// error C2440: ����ʼ����: �޷��ӡ�double��ת��Ϊ��int &��
	const int& rc = c;
	//������rc���õ���ǿ������ת��ʱ��������ʱ������
	//����ʱ�����ǲ��ܱ��޸ĵģ����г�����
}

//demo4

//������
void Swap(int& a, int& b)//����ڴ�ַ���ã�ָ�룩������
{
	int tmp = a;
	a = b;
	b = tmp;
}

//������ֵ

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

//����ΪʲôCount2��д���Ǵ����
//
// ����Count1��˵����static���ε�n�����ݴ���ھ�̬�������˺�����������ʱ�������ͷŸÿռ�
// 
// ����Count2��˵������n������ֻ�Ǵ�����Count2����ջ֡�У����˺�����������ʱ����һ���麯��ջ֡���ᱻ�ͷ�
// �����ζ�����ռ���ʱ���п��ܱ����ʻ����޸�
//
// ���ԣ�ʹ��int&��Ϊ����ֵʱ�����ڷ��ص����ݱ��벻�ǳ��˺���ջ֡2�����ٵ�����
// ����ȫ�ֱ�����static���ε����ݣ�malloc�������������
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
	//ֱ����ֵΪ����ֵ����
	size_t begin1 = clock();
	for (int i = 0; i < 10000; i++)
		test1();
	size_t end1 = clock();

	//������Ϊ����ֵ����
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




