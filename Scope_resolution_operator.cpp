//:: is the scope resolution operator. ::=apt
#include<iostream>
using namespace std;
int a=10;

int main()
{
    int a= 15;
    cout<<"\nLocal a = "<<a<<" Global a = "<<::a;
    ::a=20;
    cout<<"\nLocal a = "<<a<<" Global a = "<<::a<<endl;
    return 0;
}