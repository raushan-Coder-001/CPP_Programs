#include<iostream>
using namespace std;

class circle 
{
    private :

        int radius ;
        float x,y;

    public : 
        circle()
        {

        }

    circle (int rr,float xx , float yy)
    {
        radius =rr;
        x=xx;
        y=yy;
    }

    circle operator =(circle& c)
    {
        cout<<endl<<"Assignment operator invoked";
        radius = c.radius ;
        x= c.x;
        y=c.y;
        return circle(radius,x,y);  

        /*
            Most of the program is straightforward. What si important here is the function operator =()
                which overloads the = operator. The overloaded operator function gets called when the statement c3=c2=c1;
                gets exicuted. The overloaded = operator does the copying of the member data from one object to another.
                It does prints the 'Assignment operator invoked' message so that we can keep track of when it executes.
        */
    }

   /* circle& operator = (circle& c)
    {
        cout<<endl<<"Assignment operator invoked";
        radius = c.radius;
        x=c.x;
        y=c.y;
        return *this;
    }

    Unfortunately, we can't use reference returns on variables that are local to a function since the local variables are 
    destroyed when the function returns. This problem can be overcome using a this pointer as shown above.

    Since this is a pointer to the object of which the above function is a member, *this naturally is that 
    object itself. The statement return *this
    returns this object by reference.
    */

    void showdata()
    {
        cout<<endl<<"\nRadius = "<<radius;
        cout<<endl<<"X-Coordinate = "<<x;
        cout<<endl<<"Y-Coordinate = "<<y<<endl;
    }
};

int main()
{
    circle c1(10,2.5,2.5);
    circle c2,c3;
    c3 = c2 = c1;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;

    //I don't know why this code is giving error in =operator.
}