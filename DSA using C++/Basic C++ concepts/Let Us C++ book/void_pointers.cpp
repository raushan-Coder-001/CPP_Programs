#include<iostream>
using namespace std;
int main()
{
    void *p;
    char *s;
    cout<<p<<endl;
    cout<<s<<endl;
    p=s;
    s=(char *)p;
    cout<<p<<endl;
    cout<<s<<endl;

}