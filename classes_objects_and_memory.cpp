#include<iostream>
using namespace std;

class sample
{
    private :

        int i;
        float a;
        char ch;

    public : 
    sample ()
    {

    }

    sample (int ii,float aa,char chch)
    {
        i=ii;
        a =aa;
        ch=chch;
    }

    void dispaly ()
    {
        cout<<endl<<i<<a<<ch;
    }
};

int main()
{
    sample s1(10,3.14f,'A');
    sample s2 (20,6.28f,'B');
    cout<<endl<<sizeof(s1);
    cout<<endl<<sizeof(s2);
    return 0;
}