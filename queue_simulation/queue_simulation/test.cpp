#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include"queue_s.hpp"

using namespace std;

namespace simulation
{
	void test1()
	{
		queue<int> q;
		cout << q.empty() << endl;

		q.push(10);
		q.push(20);
		q.push(30);
		q.push(40);

		cout << q.front() << endl;
		cout << q.back() << endl;
		cout << q.size() << endl;

		q.pop();
		q.pop();

		cout << q.front() << endl;
		cout << q.back() << endl;
		cout << q.size() << endl;

	}
}

int main()
{
	simulation::test1();

	return 0;
}