#include<iostream>
using namespace std;
int num=20;
int main()
{
    int  num = 10;
    cout<<"Local = "<<num;//local variable
    cout<<"\nGlobal = "<< ::num; //global variable
    cout << "\nGlobal + Local = "<< :: num + num; //both local and global use
}