#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    private :

    char name[20];
    int age;

    public :

      employee();
      employee (char *n,int a);
      void getdata();
      void showdata(); //This tells the compiler that this function is a member of the class but it will be defined outside the class declaration at some other place in the program.
      
};

employee :: employee()
{
    strcpy(name,"");
    age = 0;
}

employee::employee (char *n,int a)
{
    strcpy(name,n);
    age =a;
}

void employee::getdata()
{
    cout<<endl<<"Enter name and age "<<endl;
    cin>>name>>age;

}

void employee::showdata()
{
    cout<<"name = "<<name<<endl<<"age = "<<age<<endl;
}

int main()
{
    employee e1("sanjay",34);
    e1.showdata();
    employee e2;
    e2.getdata();
    e2.showdata();
    return 0;
}