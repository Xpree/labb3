// labb3.cpp : This file contains the 'main' function. Program execution begins and ends there.

//task 1
#include <iostream>
using namespace::std;

int length(char *&arr)
{
    int arrSize = 0;
    while (*arr != '\0')
    {
        arrSize++;
        *arr++;
    }
    cout << "the length is " << arrSize << endl;
    return 0;
}

int main()
{
    char arr[] = "timothy";
    char *ptr = arr;
    length(ptr);
}