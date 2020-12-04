// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace::std;
#include <iostream>

void swap_sort(int *&a, int *&b, int *&c, bool *&tf)
{
	if (*tf == false)
	{
		if (*a > *b && *a > *c)
		{
			if (b > c)
			{
				cout << *a << " " << *b << " " << *c << endl;
			}
			else
			{
				cout << *a << " " << *c << " " << *b << endl;
			}
		}
		else if (*b > *c && *b > *a)
		{
			if (*c > *a)
			{
				cout << *b << " " << *c << " " << *a << endl;
			}
			else
			{
				cout << *b << " " << *a << " " << *c << endl;
			}
		}
		else if (*c > *a && *c > *b)
		{
			if (*b > *a)
			{
				cout << *c << " " << *b << " " << *a << endl;
			}
			else
			{
				cout << *c << " " << *a << " " << *b << endl;
			}
		}
	}
	if (*tf == true)
	{
		if (*a < *b && *a < *c)
		{
			if (*b < *c)
			{
				cout << *a << " " << *b << " " << *c << endl;
			}
			else
			{
				cout << *a << " " << *c << " " << *b << endl;
			}
		}
		else if (*b < *c && *b < *a)
		{
			if (*c < *a)
			{
				cout << *b << " " << *c << " " << *a << endl;
			}
			else
			{
				cout << *b << " " << *a << " " << *c << endl;
			}
		}
		else if (*c < *a && *c < *b)
		{
			if (*b < *a)
			{
				cout << *c << " " << *b << " " << *a << endl;
			}
			else
			{
				cout << *c << " " << *a << " " << *b << endl;
			}
		}
	}
}

int main()
{
	while (true)
	{
		int a;
		int b;
		int c;
		bool tf;
		int* ap = &a;
		int* bp = &b;
		int* cp = &c;
		bool* tfp = &tf;
		cout << "Give a (0 to quit): ";
		cin >> a;
		if (a == 0)
		{
			break;
		}
		cout << "Give b (0 to quit): ";
		cin >> b;
		cout << "Give c (0 to quit): ";
		cin >> c;
		cout << "Sort ascending/descending (1/0): ";
		cin >> tf;
		swap_sort(ap, bp, cp, tfp);
	}
}
