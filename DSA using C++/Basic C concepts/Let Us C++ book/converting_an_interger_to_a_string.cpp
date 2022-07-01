#include<iostream>
using namespace std;
int asciitonumber(char *);
//long int asciitonumber(char *);

int main()
{
    int n1;
    int n2;

    char *ptr1 = "155";
    char *ptr2 = "400000";

    n1 = asciitonumber (ptr1);
    n2 = asciitonumber (ptr2);
    cout<<n1<<endl<<n2;
    return 0;
}