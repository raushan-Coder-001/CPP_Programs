 #include<iostream>
 #include<cstdlib>
 #include<string.h>
 #include<new>
 using namespace std;

 const int MAX = 5;
 const int FREE = 0;
 const int OCCUPIED = 1;
 void memwarning();

 void memwarning ()
 {
     cout<<endl<<"Free store has gone empty";
     exit(1);
 }

 class employee
 {
     private :

        char name [20];
        int age;
        float sal;

    public :

        void *operator new(size_t bytes);
        void operator delete (void *q);
        void setdata(char *n,int a,float s);
        void showdata();
        ~employee();
 };

 struct pool
 {
     employee obj;
     int status;
 };

 struct pool *p = NULL;
 int flag = 0;
 void *employee::operator new(size_t sz)
 {
     int i;

     if(flag ==0)
     {
         p = (pool*) malloc (sz *MAX);
         if(p==NULL)
         memwarning();

         for(i=0;i<MAX;i++)
            {
                p[i].status = FREE;

                    flag = 1;
                     p.[0]->status= OCCUPIED;
                     return &p[0].obj;
            }
    }

     else
     {
         for(i=0;i<MAX;i++)
         {
             if(p[i].status = FREE)
             {
                 p[i].status = OCCUPIED;
                 return &p[i].obj;
             }
         }
         memwarning();
     }
 }

 void employee::operator delete (void *q)
 {
     if(q == NULL)
     return ;

    for(int i =0;i<MAX;i++)
    {
        if(q == &p[i].obj)
        {
            p[i].status =FREE;
            strcpy (p[i].obj.name,"");
            p[i].obj.age = 0;
            p[i].obj.sal =0.0;
        }
    }
 }

 void employee::setdata (char *n,int a,float s)
 {
     strcpy(name,n);
     age = a;
     sal = s;
 }

 void employee::showdata()
 {
     cout<<endl<<name<<"\t"<<age<<"\t"<<sal;
 }

 employee :: ~employee()
 {
     cout<<"reached destructor"<<endl;
 }

 int main()
 {
     set_new_handler (memwarning);
     employee *e1,*e2,*e3,*e4,*e5;

     e1=new employee;
     e1->setdata("Raushan",21,5983.55);
     e2=new employee;
     e2->setdata("Ashutosh",18,4585.54);
     e3=new employee;
     e3->setdata("Alok",19,58393.33);
     e4=new employee;
     e4->setdata("Rahul",25,58393.45);

     e1->showdata();
     e2->showdata();
     e3->showdata();
     e4->showdata();

     delete e4;
     e4->showdata();

     e4=new employee ;

     //now exhaust the store 
     e5=new employee;
     cout<<endl<<"Done!!";
     return 0;

 }

 //I don't know why error msg is shown here.