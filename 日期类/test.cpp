#define _CRT_SECURE_NO_WARNINGS


#include"date.h"

void test()
{
	Date d1(2022, 9, 29);
	Date d2(d1);
	Date d3;

	d2 += 1000;

	cout << d2 - d1 << endl;





}


int main()
{
	test();

	return 0;
}

