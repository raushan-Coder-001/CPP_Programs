#include<iostream>
using namespace std;

#define MAX 10

class queue
 {
     private :

        int arr[MAX];
        int front, rear;

    public :

        queue()
        {
            front =-1;
            rear =- 1;
        }

        void addq (int item)
        {
            if ( rear == MAX - 1)
           {
               cout<<endl<<"Queue is full";
               return ;
           }

           rear++;
           arr[rear] = item;

           if(front == -1)
           front = 0;
        }

        int delq()
        {
            int data;

            if(front == -1)
            {
                cout<<endl<<"Queue is Empty";
                return NULL;
            }

            data = arr[front];
            if(front == rear)
            front = rear = -1;
            else 
            front++;
            return data;
        }
 };

 int main()
 {

     cout<<"Implementation of queues"<<endl;
     queue a;

     a.addq (11);
     a.addq (12);
     a.addq (13);
     a.addq (14);
     a.addq (15);
     a.addq (16);
     a.addq (17);
     a.addq (18);
     a.addq (19);
     a.addq (20);
     a.addq (21);

     int i = a.delq();
     cout<<endl<<"Item deleted = "<<i;

     i = a.delq();
     cout<<endl<<"Item deleted = "<<i;

     i = a.delq();
     cout<<endl<<"Item deleted = "<<i;
     return 0;

 }