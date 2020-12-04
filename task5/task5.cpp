// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace::std;
#include <iostream>
#include <string>

void replace_chars(char *&ptrStr, char search, char replace)
{
    for (char *i = ptrStr; *i != '\0'; i++)
    {
        if (*i == search)
        {
            *i = replace;
        }
    }
    cout << ptrStr << endl;
}

int main()
{
    char arrString[] = "asdasdasdasdasdff";
    char* ptrStr = arrString;
    char search;
    char replace;
    cout << "Enter a string: ";
    cin >> arrString;
    cout << "Enter search char: ";
    cin >> search;
    cout << "Enter a char: ";
    cin >> replace;
    replace_chars(ptrStr, search, replace);
}
