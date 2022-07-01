#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

class tree
{
    private :

        struct node
        {
            node *l;
            int data;
            node *r;
        }*p;

    public :

        tree();
        ~tree();
        void search(int n,int &found,node *&parent,node *&x);
        void insert(int n);
        void teaverse();
        void in (node *q);
        void del(int num);
        void infordel(node *q);
};

tree::tree()
{
    p = NULL;
}

tree::~tree()
{
    infordel(p);
}

void tree::search(int n,int &found,node *&parent,node *&x)
{
    node *q;
    found = FALSE;
    parent = NULL;

    if(p == NULL)
    return ;

    q = p;
    while(q != NULL)
    {
        if(q->data == n)
        {
            found = TRUE;
            x = q;
            return ;
        }

        if(q->data>n)
        {
            parent = q;
            q = q->l;
        }
        else 
        {
            parent = q;
            q = q -> r;
        }
    }
}

void tree::insert (int n)
{
    int found;
    node *t,*parent,*x;
    search(n,found,parent,x);
    if(found==TRUE)
    {
        cout<<endl<<"Such a node already exists";
    }
    else 
    {
        t = new node;
        t->data = n;
        t->l = NULL;
        t->r = NULL;

        if(parent == NULL)
        p = t;
        else
        parent->data>n?parent->l=t:parent->r=t;
    }
}

void tree::teaverse()
{
    in (p);
}

void tree::in (node *q)
{
    if(q!= NULL)
    {
        in (q -> l);
        cout<<endl<<q-> data;
        in (q->r);
    }
}

void tree::infordel(node *q)
{
    if (q != NULL)
    {
        infordel (q -> l);
        infordel (q -> r);
        delete q;
    }
}

void tree::del (int num)
{
    int found;
    node *parent, *x,*xsucc;

    // if tree is empty 
    if (p == NULL)
    {
        cout<<endl<<"Tree is empty";
        return ;
    }

    parent = x = NULL;

    // call the search function to find the node to be deleted
    search (num,found,parent,x);
    //if the node to deleted is not found
    if(found == FALSE)
    {
        cout<<endl<<"Node to be deleted not found";
        return ;
    }

    //if the node to be deleted has two children
    if(x->l != NULL&&x->r != NULL)
    {
        parent = x;
        xsucc = x->r;

        while (xsucc->l != NULL)
        {
            parent = xsucc;
            xsucc = xsucc ->l;
        }
        x->data = xsucc->data;
        x = xsucc;
    }

    //if the node to be deleted has no child
    if(x->l==NULL&&x->r == NULL)
    {
        if(parent ->r == x)
        parent -> r = NULL;

        delete x;
        return ;
    }

    // if the node to be deleted has only right child
    if(x->l == NULL && x->r != NULL)
    {
        if(parent -> l == x)
        parent -> l = x -> r;
        else
        parent -> r = x -> r;

        delete x;
        return ;
    }

    // if the node to be deleted has only left child 
    if(x -> l != NULL && x-> r == NULL)
    {
        if (parent -> l == x)
        parent ->l = x -> l;

        else 
        parent -> r = x -> l;
        delete x;
        return ;
    }
}

int main()
{
    tree tt;
    int i,num;
    for(i=0;i<=6;i++)
    {
        cout<<endl<<"Enter the data for the node to be inserted";
        cin >> num;
        tt.insert(num);
    }

    tt.teaverse();
    cout<<endl<<"Enter the value of the node to be deleted";
    cin >> num;
    tt.del (num);
    cout<<endl;
    tt.teaverse();
    return 0;
}

/*
    The following program adds the deletion function to the binary class developed earlier. The functions that had no role to
    play during deletion of a node have been purposefully omitted from the class. The search() function has been suitably 
    modified. This modification is necessary for the del() function to work properly. When called from insert() the
    search() function sets the variable parent with the address of the node whose child the new node is going to become.
    When called from del() the search() function set the variable parent with the address of the node whose child the new node
    is going to become. When called from del() the search() function not only set the parent but also set up the variable x with
    address of the node being deletd.

    This program has plugged one loophole that the earlier program had. It has a destructor function that gets called when the
    tree object goes out of scope.In this function we have called another member function infordel(). This function
      recursively traveres the tree in inorder that calls the del() function for every node that it visits, thereby destroying 
      the entire tree.
*/