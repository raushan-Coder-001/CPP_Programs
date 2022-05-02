#include<iostream>
using namespace std;

class integer
{
    private :

        int i;

    public :

    void getdata()
    {
        cout<<endl<<"Enter any integer ";
        cin>>i;
    }

    void setdata (int j)
    {
        i=j;
    }

    integer() //zero argument constructor
    {

    }

    integer(int j) //one argument constructor
    {
        i=j;
    }

    void displaydata()
    {
        cout<<endl<<"Value of i= "<<i<<endl;
    }
};

int main()
{
    integer i1 (100),i2,i3;

    i1.displaydata();
    i2.setdata( 200 );
    i2.displaydata();
    i3.getdata();
    i3.displaydata();
    return 0;
}