 #include<iostream>
 using namespace std;

 struct node
 {
     int data;
     node *link;
 };

 class queue
 {
     private:

        node *front,*rear;

    public:

        queue()
        {
            front = rear = NULL;
        }

        void addq (int item)
        {
            node *temp;

            temp = new node;
            if(temp = NULL)
            cout<<endl<<"Queue is full.";

        temp ->data= item;
        temp ->link = NULL;

        if(front == NULL)
        {
            rear = front = temp;
            return ;
        }
        rear ->link = temp;
        rear = rear ->link;
        }

        int delq()
        {
            if(front == NULL)
            {
                cout<<endl<<"Queue is empty";
                return NULL;
            }
            node *temp;
            int item;

            item = front ->data;
            temp = front;
            front = front ->link;
            delete temp;
            return item;
        }

        ~queue()
        {
            if(front == NULL)
            return ;
            node *temp;
            while(front != NULL)
            {
                temp = front;
                front = front -> link;
                delete temp;
            }
        }
 };

 int main()
 {
     queue a;

     a.addq(11);
     a.addq(12);
     a.addq(13);
     a.addq(14);
     a.addq(15);
     a.addq(16);
     a.addq(17);

     int i = a.delq();
     cout<<"\nItem extracted = "<<i;

     i = a.delq();
     cout<<"\nItem extracted = "<<i;

     i = a.delq();
     cout<<"\nItem extracted = "<<i<<endl;
     return 0;
 }
 //compiled succesfully but not giving desired output don't know why?..
 