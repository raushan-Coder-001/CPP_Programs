#include<iostream>
using namespace std;
    int *p1;
    struct employee
    {
        char name[20];
        int age;
        float sal;
    }*p2;
    
int main()
{
    p1 = new int ; //allocates 4 bytes
    p2 = new employee ; //allocates 28 bytes

    int *p3;
    p3 = new int [30]; // allocates memory for storing 30 integers

    cout<<p1<<endl<<p2<<endl<<p3;

    delete p1;
    delete p2;
    delete []p3;
    return 0;

    /* In short, you would be better off if you use delete[] whenever you allocate memory using new[]. 
    Otherwise be prepare for disaster. */
}