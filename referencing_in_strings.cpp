#include<iostream>
using namespace std;
int main()
{
    char *str1 = "Raushan is a good coder";
    char *& str2=str1;
    cout<< endl<<str1<<endl<<str2;

   /* *str1='M';
    cout<<endl<<str1<<endl<<str2;

    *str2='P';
    cout<<endl<<str1<<endl<<str2;*/
    return 0;
}