#include<iostream>
using namespace std;

    class index 
    {
        private :

        int count;

        public :

        index()
        {
            count =0;
        }

        index (int i)
        {
            count = i;
        }

        void operator ++()
        {
            ++count;
        }

        void showdata()
        {
            cout<<count;
        }
    };

    int main()
    {
        index c;

        cout<<endl<<"c = ";
        c.showdata();

        ++c;
        cout<<endl<<"c = ";
        c.showdata();

        ++c;
        cout<<endl<<"c = ";
        c.showdata();
        return 0;
    }