#include<iostream>
using namespace std;
int counter = 119;
int main()
{
    register int counter; //local variable
    for(counter=1;counter<10;counter++)
    {
        cout<< endl<<::counter/counter;
    }
    return (0);
}