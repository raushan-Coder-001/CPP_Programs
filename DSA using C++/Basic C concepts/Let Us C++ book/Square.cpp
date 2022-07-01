#include<iostream>
using namespace std;
#define SQUARE(x) x*x
inline float square (float y)
{
    return y*y;
}

int main()
{
    float a=0.5,b=0.5,c,d;

    c=SQUARE (++a);
    d=square(++b);
    return 0;
}