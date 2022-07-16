 #include<iostream>
 using namespace std;

 class sample
 {
     private :
     int data;
     public  :
     sample()
     {
         data = 0;
     }

     void changedata()
     {
         data = 10;
     }
/*
     void modifydata() const
     {
         data = 20; //error
     }
*/
     void showdata()
     {
         cout<<endl<<"data = "<<data;
     }
 };

 int main()
 {
     sample s1;

     s1.showdata();
     s1.changedata();
     s1.showdata();
     s1.changedata();
     s1.showdata();
     return 0;
 }