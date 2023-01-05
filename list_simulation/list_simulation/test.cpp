#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include<list>

#include"list_s.hpp"

using namespace std;

namespace simulation
{
	void test1()
	{
		list<int> lt;

		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		cout << lt.front() << endl;
		cout << lt.back() << endl;

		lt.pop_back();
		lt.pop_front();

		cout << lt.front() << endl;
		cout << lt.back() << endl;
	}


	void test2()
	{
		int a[] = { 0,1,2,3,4,5,6,7,8,9 };
		list<int> lt(a, a + 10);

		list<int> l;
		l = lt;

		lt.push_front(10);
		lt.push_front(20);
		lt.push_back(30);
		lt.push_back(40);

		l.pop_back();
		l.pop_back();
		l.pop_front();
		l.pop_front();

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
			cout << *it++ << " ";
		cout << endl;
		cout << lt.size() << endl;
		
		

		for (auto e : l)
		{
			cout << e << " ";
		}
		cout << endl;
		cout << l.size() << endl;

	}
}

void testlist1()
{
	list<int> lt(3, 0);

	for (auto e : lt)
		cout << e << " ";
	cout << endl;

	auto it = lt.begin();
	
}

int main()
{
	//testlist1();
	simulation::test2();
	

	return 0;
}