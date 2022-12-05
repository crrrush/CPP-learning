#define _CRT_SECURE_NO_WARNINGS


#include"string.h"

#include<string>

namespace simulation
{
	void test1()
	{
		string s("abc");
		//s.push_back('a');
		//s.push_back('b');
		//s.push_back('c');
		//s.push_back('d');
		//s.push_back('f');

		cout << s.size() << endl;
		cout << s.capacity() << endl;
		cout << s.c_str() << endl;
	}


	void test2()
	{
		string s1("ab");
		string s2;
		s2 = s1;

		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
		cout << s2.c_str() << endl;


		s2.resize(4);
		cout << s2.size() << endl;
		cout << s2.capacity() << endl;
		cout << s2.c_str() << endl;

	}

	void test3()
	{
		string s1("abc");
		string s2("abc");

		cout << (s1 >= s2) << endl;
	}

	void test4()
	{
		string s1("abc");
		string s2(s1);

		s2 += 'd';
		s2 += 'e';

		cout << s2.c_str() << endl;


		s2 += 'f';
		s2 += 'g';
		s2 += 'h';

		cout << s2.c_str() << endl;


		s1 += "123";
		cout << s1.c_str() << endl;

	}

	void test5()
	{
		string s1("abc");
		string s2;
		s2 = s1;

		s2 += 'd';
		s2 += 'e';




		s2 += 'f';
		s2 += 'g';
		s2 += 'h';




		s1 += "123";


		cout << s1 << endl;
		cout << s2 << endl;

		s1.swap(s2);

		cout << s1 << endl;
		cout << s2 << endl;
	}


	void test6()
	{
		string s1("abc");
		string s2;

		cin >> s2;

		cout << s1 << endl;
		cout << s2 << endl;
	}


	void test7()
	{
		string s1("abcdefg");
		
		cout << s1.find('d') << endl;
		cout << s1.find("def") << endl;

	}

	void test8()
	{
		string s1("abcdefg");

		cout << s1.insert(0, '0') << endl;
		cout << s1.insert(0, "") << endl;
		cout << s1.erase(0, 4) << endl;

	}

}

void teststring1()
{
	string s1("12345678342525432534523453252435325");
	string s2("abc");

	s1 = s2;

	cout << "s1     " << s1 << endl;
	cout << "s1 cap " << s1.capacity() << endl;
	cout << "s2     " << s2 << endl;
	cout << "s2 cap " << s2.capacity() << endl << endl;

	s1.swap(s2);

	cout << "s1     " << s1 << endl;
	cout << "s1 cap " << s1.capacity() << endl;
	cout << "s2     " << s2 << endl;
	cout << "s2 cap " << s2.capacity() << endl;
}

void teststring2()
{
	//string s1("12345678342525432534523453252435325");

	string s1("abcdefg");

	//cout << "s1     " << s1 << endl;
	//cout << "s1 size " << s1.size() << endl;
	//cout << "s1 cap " << s1.capacity() << endl;

	cout << s1.insert(0, 1, '\0') << endl;//???
	cout << s1.insert(0, "") << endl;
	cout << s1 << endl;
	cout << s1.erase(0, 4) << endl;


	//cout << "s1     " << s1 << endl;
	//cout << "s1 size " << s1.size() << endl;
	//cout << "s1 cap " << s1.capacity() << endl;

}


int main()
{
	teststring2();
	//simulation::test8();

	return 0;
}