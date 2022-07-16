#include<iostream>
using namespace std;
int main()
{
    int y=1001,j=365,n;
    n=(y-1)*j; 
    cout<<n<<endl;
    n=(y-1)*(long)j;//c style typecasting, also supported by C++
    cout<<n<<endl;
    n=(y-1)*long(j);//new C++ style typecasting
    cout<<n<<endl;

}