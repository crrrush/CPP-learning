#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include"stack_s.hpp"

using namespace std;


namespace simulation
{
	void test1()
	{
		stack<char> st;
		cout << st.empty() << endl;

		st.push('a');
		st.push('b');
		st.push('c');
		st.push('d');

		cout << st.size() << endl;
		cout << st.top() << endl;

		st.pop();
		st.pop();

		cout << st.size() << endl;
		cout << st.top() << endl;

	}
}



int main()
{
	simulation::test1();


	return 0;
}