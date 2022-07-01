#include<iostream>
using namespace std;
int main()
{
    char *p = "Hello";  //pointer is a variable, string is constant
   //  *p = 'M'; give error
    p="Bye"; // works
    cout<<p<<endl;

    const char *q = "Hello";  // pointer is variable,string is constant
    //*q='M';  give error
    q= "Byee";//works
    cout<<q<<endl;

    char const *s = "Hello" ; //pointer is variable, string is constant
   // *s = 'M'; //error
   s="Hello"; //works
    cout<<s<<endl;

    char *const t="Hey friend"; //pointer is constant,so is string
    *t='M'; //works
   // t= "Bye";  //error
   const char *const u = "Hello"; // string is fixed, so is pointer
   //*u = 'M'; //error
   //u= "Bye"; //error



}