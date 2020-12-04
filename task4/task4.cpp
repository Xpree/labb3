// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace::std;

void swap_sort_ptr_addr(int** a, int** b, int **c, bool tf)
{
    int temp = 0;
	if (tf == false)
	{
		if (**a >  **b && **a >  **c)
		{
			if (b > c)
			{

				//cout << **a << " " << **b << " " << **c << endl;
			}
			else
			{
				temp = **b;
				**b = **c;
				**c = temp;
				//cout << **a << " " << **c << " " << **b << endl;
			}
		}
		else if (**b > ** c && **b > ** a)
		{
			if (**c > ** a)
			{
				temp = **a;
				**a = **b;
				**b = **c;
				**c = temp;
				//cout << **b << " " << **c << " " << **a << endl;
			}
			else
			{
				temp = **a;
				**a = **b;
				**b = **c;
				**c = temp;
				//cout << **b << " " << **a << " " << **c << endl;
			}
		}
		else if (**c > ** a && **c > ** b)
		{
			if (**b > ** a)
			{
				temp = **a;
				**a = **c;
				**c = temp;
				//cout << **c << " " << **b << " " << **a << endl;
			}
			else
			{
				temp = **a;
				**a = **c;
				**c = **b;
				**b = temp;
				//cout << **c << " " << **a << " " << **b << endl;
			}
		}
	}
	if (tf == true)
	{
		if (**a < **b && **a < **c)
		{
			if (**b < **c)
			{

				//cout << **a << " " << **b << " " << **c << endl;
			}
			else
			{
				temp = **c;
				**c = **b;
				**b = temp;
				//cout << **a << " " << **c << " " << **b << endl;
			}
		}
		else if (**b < **c && **b < **a)
		{
			if (**c < **a)
			{
				temp = **a;
				**a = **b;
				**b = **c;
				**c = temp;
				//cout << **b << " " << **c << " " << **a << endl;
			}
			else
			{
				temp = **a;
				**a = **b;
				**b = temp;
				//cout << **b << " " << **a << " " << **c << endl;
			}
		}
		else if (**c < **a && **c < **b)
		{
			if (**b < **a)
			{
				temp = **a;
				**a = **c;
				**c = temp;
				//cout << **c << " " << **b << " " << **a << endl;
			}
			else
			{
				temp = **a;
				**a = **c;
				**c = **b;
				**b = temp;
				//cout << **c << " " << **a << " " << **b << endl;
			}
		}
	}
}

int main()
{
    int a = 7, b = 6, c = 1;
    int* p1 = &a, * p2 = &b, * p3 = &c;
    swap_sort_ptr_addr(&p1, &p2, &p3, true);
    cout << *p1 << " " << *p2 << " " << *p3;    // Points "1 6 7"
}
