#include<iostream>
using namespace std;

    class example 
    {
        private :

            int data;

        public :
            example () //constructor (same name as class)
            {
                cout<<endl<<"Inside the constructor";
            }

            ~example() //destructor (same name with tilde)
            {
                cout<<endl<<"Inside the distructor"<<endl;
            }
    };

    int main()
    {
        example e;
        return 0;
    }

            /* The most common use of destructors is to deallocate memory that was allocated for the 
                object by the constructor. 