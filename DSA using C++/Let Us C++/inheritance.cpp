#include<iostream>
using namespace std;

class index //base class
{
    protected :

        int count;
    
    public :

        index()  //zero argument constructor
        {
            count = 0;
        }

        index (int c) // one argument constructor
        {
            count = c;
        }

        void display()
        {
            cout<<endl<<"cout = "<<count;
        }

        void operator++()
        {
            count++;
        }
};

class index1 : public index //derived class
{
    public :

        void operator --()
        {
            count--;
        }
};

int main()
{
    index1 i;
    ++i;
    ++i;
    i.display();
    --i;
    i.display();
    return 0;
}

/*
    In this code we have declared a base class called index and then derived a class called index1. index1 does't need 
    a constructor or the operator ++() functions, since they are already present in the base class.

    Inheritance is the most probably the most powerful feature of oops after classes themselves. Inheritance is the 
    process of creating new classes, called derived classes, from existing classes. These existing classes are often called
    base class but can add new features and refinements of its own. By adding these refinements the base class remain 
    unchanged. Most important is that it permits code reusability. Once a base class is written and debugged, it need not to 
    be touched again but at the same time it can be adapted to work in differnt situations.
*/