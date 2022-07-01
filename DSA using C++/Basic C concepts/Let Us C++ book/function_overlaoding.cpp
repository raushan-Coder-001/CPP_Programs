#include<iostream>
using namespace std;
int abs(int);
long abs(long);
double abs(double);
int main()
{
    int i = -25,j;
    long l = -10000000L,m;
    double d = -12.34,e;

    j= abs (i);
   // m = abs(l);
    e = abs (d);

        cout<<endl<<j<<endl<<m<<endl<<e<<endl;
        return 0;
}

    int abs(int ii)
    {
        return (ii>0?ii:ii*-1);
    }
    long abs(long ll)
    {
        return (ll>0?ll:ll-1);
    }
    double abs(double dd)
    {
        return (dd>0?dd:dd*-1);
    }