#include<iostream>
using namespace std;
const char *fun();
int main()
{
    const char *p;
    p = fun();
  //  *p = 'A'; //error
  cout<<p;
  return 0;
}

    const char *fun()
    {
        return "Raushan";
    }