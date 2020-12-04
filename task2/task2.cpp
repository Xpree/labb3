// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace::std;
#include <iostream>

int average_salary(int *&pArrEmpl, int employees)
{
    int res = 0;
    for (int i = 0; i < employees; i++)
    {
        res += pArrEmpl[i];
    }
    int average = res / employees;
    cout << "totala: " << round(average);
    return round(average);
}

int main()
{
    int employees;
    int arrEmpl[5] = {};
    int* p = arrEmpl;
    cout << "input how many employees: " ;
    cin >> employees;
    int i = 0;
    for (int i = 0; i < employees; i++)
    {
        cout << "enter the salaries: ";
        cin >> arrEmpl[i];
    }
    for (int i = 0; i < employees; i++)
    {
        cout << arrEmpl[i] << endl;
    }
    average_salary(p, employees);
}