#include<iostream>
using namespace std;

int main()
{
    float r,a;
    const float PI = 3.14f;
    cout<<"Enter the radius for finding the area: "<<endl;
    cin >> r;
    a= PI *r*r;
    cout<<endl<<"Area of circle = "<<a<<endl;
    return 0;
}