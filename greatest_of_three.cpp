#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"\nMaximum of three numbers is: ";
    if(a>b||a>c)
    {
        cout<<a;
    }
    else if(b>a||b>>c)
    {
        cout<<b;
    }
    else if(c>a||c>b)
    {
        cout<<c;
    }
    return 0;
}