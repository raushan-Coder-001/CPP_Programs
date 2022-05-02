#include<iostream>
using namespace std;

class complex 
{
    private :
        float real,imag;

    public :
    complex ()
    {

    }

    complex (float r,float i)
    {
        real  = r;
        imag = i;
    }

    void getdata()
    {
        float r,i;
        cout<<endl<<"Enter real and imaginary part ";
        cin>>r>>i;
        real=r;
        imag=i;
    }

    void setdata (float r,float i)
    {
        real =r;
        imag =i;
    }

    void displaydata()
    {
        cout<<endl<<"real= "<<real;
        cout<<endl<<"imaginary= "<<imag<<endl;
    }

    void add_complex (complex c1,complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }


    complex mul_complex (complex c2)
    {
        complex t;

        t.real = real * c2.real - imag * c2.imag;
        t.imag = real * c2.imag + c2.real*imag;
        return (t);
    }
};

int main()
{
    complex c1,c2(1.5,-2.5),c3,c4;

    c1.setdata(2.0,2.0); //set data in var. in the object
    c3.add_complex(c1,c2);
    c3.displaydata();

    c4.getdata();
    complex c5(2.5,3.0),c6;
    c6 = c4.mul_complex (c5);
    c6.displaydata();

    complex c7;
    c7.add_complex (c1,c2.mul_complex(c3));
    c7.displaydata();
    return 0;
}