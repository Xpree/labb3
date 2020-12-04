// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <array>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void initialisedatabase(vector <string> *names)
{
    names->clear();
}

void insert(vector<string> *names)
{
    string inpName;
    while (true)
    {
        cout << "enter a name: ";
        cin >> inpName;
        if (inpName == "q" || inpName == "Q")
        {
            break;
        }
        else
        {
            names->insert(names->begin(), inpName);
            cout << "\n";
        }
    }
}
void search(vector<string> *names)
{
    string inp;
    cout << "search name: ";
    cin >> inp;
    for (int i = 0; i < names->size(); i++)
    {
        string name = names->at(i);
        if (name.find(inp) != std::string::npos)
        {
            cout << name << endl;
        }
    }
}

void funcdelete(vector<string> *names) 
{
    string inp;
    cout << "enter a name you want to delete ";
    cin >> inp;
    for (int i = 0; i < names->size(); i++)
    {
        if (names->at(i) == inp)
        {
            names->at(i).erase();
        }
    }
}

void print(vector<string> *names)
{
    for (int i = 0; i < names->size(); i++)
    {
        cout << names->at(i) << endl;
    }
}

void save(vector<string> *names)
{
    string inp;
    cout << "Enter file name: ";
    cin >> inp;
    ofstream outfile;
    outfile.open(inp);
    for (int i = 0; i < names->size(); i++) {
        outfile << names->at(i) << endl;
    }
    outfile.close();
}

void load(vector<string> *names)
{
    string inp;
    cout << "Enter file name: ";
    cin >> inp;
    ifstream infile;
    infile.open(inp);
    string data;
    while (getline(infile, data))
    {
        cout << data << endl;
        names->insert(names->end(), data);
    }
    infile.close();
    
}

void initialise()
{
    vector <string> names = {};
    vector <string>* pointer = &names;
    while (true)
    {
        int inp;
        cout << "1. initialise database" << endl;
        cout << "2. insert" << endl;
        cout << "3. search" << endl;
        cout << "4. delete" << endl;
        cout << "5. print" << endl;
        cout << "6. save" << endl;
        cout << "7. load" << endl;
        cout << "8. quit" << endl;
        cout << "choose option: ";
        cin >> inp;
        if (inp == 1)
        {
            initialisedatabase(pointer);
        }
        if (inp == 2)
        {
            insert(pointer);
        }
        if (inp == 3)
        {
            search(pointer);
        }
        if (inp == 4)
        {
            funcdelete(pointer);
        }
        if (inp == 5)
        {
            print(pointer);
        }
        if (inp == 6)
        {
            save(pointer);
        }if (inp == 7)
        {
            load(pointer);
        }
        if (inp == 8)
        {
            break;
        }
    }
}

int main()
{
    //task6
    initialise();
}
