#include<iostream>
using namespace std;
int main()
    {
        int i=10;
        const int &j =i;
        i=20;
        cout<<endl<<"i = "<<i<<" j = "<<j<<endl;
        return 0;
    }
