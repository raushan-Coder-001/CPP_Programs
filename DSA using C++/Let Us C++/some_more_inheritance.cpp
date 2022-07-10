 #include<iostream>
 using namespace std;

 class linklist
 {
     protected :
        
        struct node
            {
                int data;
                node *link;
            }*p;

    public :

        linklist();
        ~linklist();
        void append(int num);
        void addatbeg(int num);
        void addafter(int c,int num);
        void del(int num);
 };

 linklist::linklist()
 {
     p = NULL;
 }

 linklist::~linklist() //destructor
 {
     node *t;
     while(p != NULL)
     {
         t = p;
         p = p->link;
         delete t;
     }
 }

 //adds nodes at the end of the linked list
 void linklist::append(int num)
 {
     node *q, *t;

     if (p == NULL) // if the list is empty
     {
         p = new node ;
         p -> data = num;
         p ->link = NULL;
     }
     else
     {
         q = p ;
         while (q ->link != NULL)
         q = q ->link;

         t = new node;
         t-> data = num;
         t-> link = NULL;
         q-> link = t;
     }
 }

 //adds node at beggining of list
 void linklist::addatbeg(int num)
 {
     node *q;

     q = new node;
     q->data = num;
     q->link = p;
     p = q;
 }

 //adds a new node after the specified number of nodes
 void linklist::addafter(int c, int num)
 {
     node *q,*t;
     int i;

     for(i = 0,q=p;i<c;i++)
     {
         q = q->link;
         if(q==NULL) // if end of list is encountered
         {
             cout<<endl<<"There are less than "<<c<<" elements.";
             return;
         }
     }

     //insert new node
     t= new node;
     t->data = num;
     t->link = q->link;
     q->link = t;
 }

 //delete node from the linked list
 void linklist::del (int num)
 {
     node *q,*r;

     q = p;
     if(q -> data == num) // if node to delete is first node
     {
         p = q->link;
         delete q;
         return;
     }

     r = q;
     while (q != NULL)
     {
         if(q->data == num)
         {
             r ->link = q ->link;
             delete q;
             return;
         }

         r=q;
         q = r->link;
     }

     cout<<endl<<"Element "<<num<<" not found";
 }

 class linklist1: public linklist{
     public :
         void display();
         int count();
 };

 //displays contents of the linked list
 void linklist1::display()
 {
     node *q;

     cout<<endl;
     for(q = p;q != NULL;q=q->link)
     cout<<q->data<<endl;
 }
 //counts number of nodes in the linked list
 int linklist1::count()
 {
     node *q;
     int c = 0;
     for(q = p;q!=NULL;q = q->link)
     c++;

     return (c);
 }
 
 int main()
 {
     linklist1 ll;

     cout<<endl<<"No. of elements in Linked List = "<<ll.count();

     ll.append(11);
     ll.append(22);
     ll.append(33);
     ll.append(44);
     ll.append(55);
     ll.append(66);

     ll.addatbeg(100);
     ll.addatbeg(200);

     ll.addafter(3,333);
     ll.addafter(6,444);

     ll.display();

     cout<<endl<<"No. of lements in the Linked List = "<<ll.count();

     ll.del(200);
     ll.del(66);
     ll.del(0);

     ll.display();

     cout<<endl<<"No. of elements in linked list = "<<ll.count()<<endl;
     return 0;
 }

 /* 
    The following program has a base class called linklist and a derived class linklist1. The base class is capable
    of adding or deleting nodes from a link list. The derived class inherits these features of the base class and 
    two more functions, one to dispalyy the contents of the linked list and another to count the nodes in it.

    There are two reasons to derive a class. One is that you are building a well-organized object oriented class 
    hierarchy where the user defined data types descend from one root class.
*/