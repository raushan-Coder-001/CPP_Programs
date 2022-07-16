#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
    char name[20];
    int age;
    float salary;
};

void modify_c(employee *);
void modify_cpp(employee &);

int main()
{
    employee e1 = {"Sanjay",32,3200.00};
    employee e2 = {"Sameer",28,1950.00};

    modify_c (&e1);
    cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary<<endl;
    modify_cpp(e2);
    cout<<endl<<e2.name<<endl<<e2.age<<endl<<e2.salary<<endl;
    return 0;
}

void modify_c (employee *e)
{
    strcpy (e->name,"santosh");//page no 55 let us c++.
    e-> age= 37;
    e-> salary = 3970.00;
}

void modify_cpp(employee &e)
{
    strcpy(e.name,"saket");
    e.age = 31;
    e.salary=2500.00;
}