 #include<iostream>
 using namespace std;
 class linklist
 {
     private : 

        struct node
        {
            int data;
            node*link;
        }*p;
 

    public :

        linklist();
        void append(int num);
        void addatbeg(int num);
        void addafter(int c,int num);
        void del(int num);
        void display();
        int count();
        ~linklist();
 };

 linklist::linklist()
 {
     p = NULL;
 }

 //adds a new node at the end of the linked list 

 void linklist::append(int num)
 {
     node *q,*t;

     //if the list is empty
     if(p == NULL)
     {
         //create first node
         p = new node;
         p -> data = num;
         p ->link = NULL;
     }
     else
     {
         //go to the last node
         q = p;
         while(q->link != NULL)
         q = q -> link;

         //add node at the end 

         t = new node;
         t-> data = num;
         t-> link = NULL;
         q->link = t;
     }
 }
 //adds a new node at the beginning of the linked list 

 void linklist::addatbeg(int num)
 {
     node *q;

     //add new node
     q = new node;
     q -> data = num;
     q ->link = p;
     p = q;
 }

 //adds a new node after the specified number of nodes 
 void linklist::addafter(int c,int num)
 {
     node *q,*t,int i;
     //skip to the desired position
     for(i=0,q=p;i<c;i++)
     {
         q = q->link;

         // if end of linked list is encountered 
         if(q == NULL)
         {
             cout<<endl<<"There are less than "<<c<<" elements.";
             return ;
         }
     }

     //insert new node
     t= new node;
     i->data = num;
     t->link = q -> link;
     q -> link = t;
 }
//delete the specified node from the linked list

void linklist::del (int num)
{
    node *q,*r;

    q = p;

    //if node to be deleted is first node

    if(q->data == num)
    {
        p = q->link;
        delete q;
        return ;
    }
    //traverse the list till the last but one node is reached
    r= q;
    while (q!= NULL)
    {
        if(q->data ==num)
        {
            r->link=q->link;
            //free the memory occupied by the node
            delete q;
            return ;
        }

        r = q;
        q = q -> link;
    }
    cout<<endl<<"Elememt "<<num<<" not found";
}

//displays the contents of the linked list 
void linklist::display()
{
    node *q;

    cout<<endl;


    //traverse the entire linked list
    for(q = p ; q != NULL; q = q->link)
        cout<<endl<<q->data;
}

//counts number of nodes present in the linked list
int linklist::count()
{
    node *q;int c=0;

    //traverse the entire linked list
    for(q = p;q != NULL;q = q->link)
    c++;

    return (c);
}

//destroys the linked list object
linklist::~linklist()
{
    node * q ;

    if(p == NULL)
    return ;

    while (p != NULL)
    {
         q = p->link;
         delete p;
         p = q;
    }
}

int main()
{
    linklist ll;

    cout<<endl<<"No. of elements in Linked List = "<<ll.count();
    ll.append(11);
    ll.append(22);
    ll.append(33);
    ll.append(44);
    ll.append(55);
    ll.append(66);

    ll.addatbeg(100);
    ll.addatbeg(200);
    ll.addatbeg(300);

    ll.addafter(3,333);
    ll.addafter(6,444);

    ll.display();
    cout<<endl<<"No. of elements in linked list = "<<ll.count();

    ll.del(300);
    ll.del(66);
    ll.del(0);

    ll.display();
    cout<<endl<<"No. of elements in linked list = "<<ll.count();
    return 0;
}