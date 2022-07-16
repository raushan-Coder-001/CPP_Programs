 #include<iostream>
 #include<cstdlib>
 #include<string.h>
 #include<new>
 using namespace std;

 class employee
 {
     private :

        char name[20];
        int age;
        float sal;

    public :

        void *operator new (size_t bytes);
        void operator delete (void *q);
        employee();
        ~employee();
 };

 char pool [sizeof(employee)];

 employee::employee()
 {
     cout<<endl<<"Reached constructor";
 }

 employee::~employee()
 {
     cout<<endl<<"Reached destructor";
 }

 void *employee::operator new(size_t sz)
 {
     cout<<endl<<"Reached employee::new";
     return pool;
 }

 void employee::operator delete(void *q)
 {
     cout<<endl<<"Reached employee::delete"<<endl;
 }

 int main()
 {
     employee *e1;
     e1 = new employee;
     delete e1;
     return 0;
 }