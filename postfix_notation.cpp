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
         count =i;
     }

     index operator ++()
     {
         return index (++count);
     }

     index operator ++(int)
     {
         return index(count++);
     }

     void showdata()
     {
         cout<<count;
     }
};

    int main()
    {
        index c,d,e,f;
        e=++c;
        cout<<endl<<"c = ";
        c.showdata();
        cout<<endl<<"e = ";
        e.showdata();

        f= d++;
        cout<<endl<<"d = ";
        d.showdata();
        cout<<endl<<"f = ";
        f.showdata();
        return 0;
    }