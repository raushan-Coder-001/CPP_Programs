#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int &j=i;
    cout<<"i= "<<i<<" j= "<<j<<endl;
    j=20;
    cout<<"i= "<<i<<" j= "<<j<<endl;
    i=30;
    cout<<"i= "<<i<<" j= "<<j<<endl;
    i++;
    cout<<"i= "<<i<<" j= "<<j<<endl;
    j++;
    cout<<"i= "<<i<<" j= "<<j<<endl;
    cout<<"address of i = "<<&i<<" address of j = "<<&j<<endl;
    return 0;
}
    /* A few point to note ..
    a) A reference must always be initialized.Thus the following set of statements produce an error.

    int i=4;
    int &j;
    j=i;

    b) Once a reference variable has been defined to refer to a particular variable, it can't refer to any other variable. 
        That is once the reference and variable are linked they are tied together inseperably.

    c) The way we can create a reference to an int, or a floor or a char, we can also create a reference to a pointer.
     The declaration of such a reference would look like this:

        char *p = "Hello";
        char *&q = p;

    d) A variable can have multiple references. Changing the value of a one of them effects a change in all others.

    e) Through an array of pointers is acceptable, an array of references is not.
    
    */
   