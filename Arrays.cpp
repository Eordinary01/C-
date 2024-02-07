#include <iostream>
using namespace std;

class Employee
{

    int id;
    int Salary;

public:
    void setId(void)
    {
        Salary = 50000;
        cout << "Enter Id of an Employee:";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Id of this Employee is " << id << endl;
    }
};

int main()
{

    // Employee dev, rohan,rajiv,sakshi;

    // dev.setId();
    // dev.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {

        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}