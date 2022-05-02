 #include<iostream>
 using namespace std;

 class example 
 {
     private :

     int i;

    public :

    void setdata (int ii)
    {
        i = ii; // one way to set data 
        cout<<endl<<"my object's address is "<<this;
        this -> i = ii; //another way to set data 
    }

    void showdata ()
    {
        cout<<i; // one way to display data
        cout<<endl<<"my object's address is "<<this <<endl;
        cout<<this-> i <<endl; // another way to display data
    }
 };

 int main()
 {
     example e1;
     e1.setdata(10);
     e1.showdata();
     return 0;
 }