#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include<vector>

#include"vector_s.h"

using namespace std;

namespace simulation
{
	void test1()
	{
		int a[] = { 0,1,2,3,4,5,6,7,8,9 };
		vector<int> v0(a, a + 10);
		vector<int> v;
		v = v0;

		for (auto e : v)
			cout << e << " ";
		cout << endl;
		

		size_t cap = v.capacity();
		for (int i = 0; i < 200; ++i)
		{
			v.push_back(i);
			if (cap != v.capacity())
			{
				cap = v.capacity();
				cout << "newcap: " << cap << endl;
			}
		}



		cout << v.size() << endl;
		cout << v.capacity() << endl;
	}

	void test2()
	{
		int a[] = { 0,1,2,3,4,5,6,7,8,9 };
		vector<int> v0(a, a + 10);
		vector<int> v;
		v = v0;

		for (auto e : v)
			cout << e << " ";
		cout << endl;

		cout << v.size() << endl;
		cout << v.capacity() << endl;

		v.resize(20);

		for (auto e : v)
			cout << e << " ";
		cout << endl;

		cout << v.size() << endl;
		cout << v.capacity() << endl;

		v.push_back(1);

		cout << v.size() << endl;
		cout << v.capacity() << endl;
	}

	void test3()
	{
		int a[] = { 0,1,2,3,4,5,6,7,8,9 };
		vector<int> v0(a, a + 10);
		vector<int> v(v0);


		for (int i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << endl;

		vector<int>::iterator it = v.begin();
		it = v.insert(it, 0xFF);

		for (int i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << endl;

		v.erase(it);
		v.pop_back();
		for (int i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << endl;
	}

}

void vectortest1()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> v(a, a + 10);
	//size_t cap = v.capacity();
	//for (int i = 0; i < 200; ++i)
	//{
	//	v.push_back(i);
	//	if (cap != v.capacity())
	//	{
	//		cap = v.capacity();
	//		cout << "newcap: " << cap << endl;
	//	}
	//}

	for (auto e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(10);

	for (auto e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(1);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

}



int main()
{
	simulation::test1();
	//vectortest1();



	return 0;
}