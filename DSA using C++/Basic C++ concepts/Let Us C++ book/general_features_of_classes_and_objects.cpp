#include<iostream>
using namespace std;
    
    //Program for calculating the area and the perimeter of a rectangle.                  
class rectangle
{
    private :
    int len,br;

    public :
    void getdata()
    {
        cout<<endl<<"Enter length and breadth";
        cout<<endl;
        cin>>len>>br;
    }
    void setdata(int l,int b)
    {
        len = l;
        br = b;
    }
    void displaydata()
    {
        cout<<endl<<"length ="<< len;
        cout<<endl<<"breadth ="<< br;
    }

    void area_peri()
    {
        int a,p;
        a= len*br;
        p=2*(len+br);
        cout<<endl<<"area ="<< a;
        cout<<endl<<"perimeter ="<< p<<endl;
    }
};

int main()
{
    rectangle r1,r2,r3; // define three objects of class rectangle

    r1.setdata(10,20); //set data in elements of the object
    r1.displaydata(); // display the data set by setdata()
    r1.area_peri(); // calculate and print area and perimeter

    r2.setdata(5,8);
    r2.displaydata();
    r1.area_peri();

    r3.getdata(); // receive data from keyboard
    r3.displaydata();
    r3.area_peri();
    return 0;
}