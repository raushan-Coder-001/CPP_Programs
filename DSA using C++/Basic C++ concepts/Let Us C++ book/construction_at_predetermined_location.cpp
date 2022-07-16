 #include<iostream>
 using namespace std;
 const int MAX = 15;
 class sample
 {
     private :

        int i;

    public :
        sample()
        {

        }
        ~sample()
        {

        }

        void fun()
        {
            cout<<"Reached fun"<<endl;
        }
 };

 int main()
 {
     int i;
     char *buf;
     sample *p;

     buf = new char [sizeof(sample)*MAX];
     p = new (buf)sample[MAX];

     for(i=0;i<MAX;i++)
     p[i].fun();
     for(i=0;i<MAX;i++)
     p[i].~sample();

     delete [] buf;

     return 0;
 }