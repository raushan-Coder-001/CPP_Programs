#include<iostream>
using namespace std;

class sample
{
    private :

        static int index; //declaration of index 
        int count;

    public :

        sample()
        {
            index++;
            count++;
        }

        void showdata()
        {
            cout<<endl<<"index = "<<index;
            cout<<endl<<"count = "<<count;
        }
};

int sample::index = 0; //defination of index

int main()
{
    sample s1,s2,s3;

    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}

/* As we expected, the value of index is reported as 3 for each object, whereas, the value of count is reported as
    2482177,1 and 18880041. This is so because index is being shared amongst the three objects, whereas, each 
    object enjoys its own count. Since count has not been specifically initialised its value is being reported as garbag.


    - Why such an approach is used for static data members? 
        If static data  members were defined inside the class declaration it would violate the idea that a class 
        declaration is only a blueprint and does not set aside any memory. Defining the static member data outside
        the class also emphasizes two facts :
            1) The memory space for such data is allocated only once, before the porgram starts executing.
            2) There is only one static member variable for the entire class ;
                each object does not have its own version of the variable.

    A word of caution! If we include the declaration of a static variable but forget its definition, the compiler 
    would pass its defination, the compiler would pass it, whereas, the linker would tell you're trying to reference
    an undeclared external variable. This happens even if you include the definition, but forget the class name 
    (the sample:: in the program above).

    Lastly, the most important question: when would we be requires to use static member data? 
    - Imagine a situation where an object is required to know how many other objects of its class are in existence.
        In this case a static variable index can be includes as a member of the class. Being static, this variable would be 
        shared by all the objects.