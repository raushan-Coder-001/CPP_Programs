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
    void search(int n,int &found,node *&parent);
    void insert (int n);
    void traverse ();
    void in (node *q);
    void pre (node *q);
    void post (node *q);
    int operator == (tree t);
    int compare (node *pp,node *qq);
    void operator = (tree t);
    node *copy(node *q);

};

tree::tree()
{
    p = NULL;
}

void tree::search (int n, int &found,node *&parent)
{
    node *q;
    found = FALSE;
    parent = NULL;

    if(p == NULL)
    return ;

    q = p;
    while(q != NULL)
    {
        if(q-> data == n)
        {
            found = TRUE;
            return;
        }

        if(q-> data>n)
        {
            parent = q;
            q = q -> l;
        }
        else 
        {
            parent = q;
            q = q -> r;
        }
    }
}

void tree::insert(int n)
{
    int found;
    node *t,*parent;

    search (n,found,parent);

    if(found == TRUE)
        cout<<endl<<"Such a node already exist";
        else
        {
            t = new node;
            t-> data = n;
            t->l = NULL;
            t ->r = NULL;

            if (parent == NULL)
            p = t;
        else 
            parent ->data>n ? parent->l = t: parent ->r  = t;
        }
}

void tree::traverse()
{
    int choice;

    cout<<endl<<"1. Inorder"<<endl<<"2. Preorder"<<endl<<"3. Postorder"<<endl<<"Your choice";
    cin>>choice;

    switch (choice)
    {
        case 1:
            in (p);
            break;

        case 2:
            pre(p);
            break;
        
        case 3:
            post(p);
            break;
    }
}

void tree::in(node *q)
{
    if(q != NULL)
    {
        in(q->l);
        cout<<"\t"<<q->data;
        in(q->r);
    }
}

void tree::pre(node *q)
{
    if(q != NULL)
    {
        cout<<"\t"<<q->data;
        pre(q->l);
        pre(q->r);
    }
}

void tree::post(node *q)
{
    if(q != NULL)
    {
        post (q->l);
        post (q->r);
        cout<<"\t"<<q->data;
    }
}

int tree::operator==(tree t)
{
    int flag;

    flag = compare (p,t.p);
    return (flag);
}

int tree::compare(node *pp,node *qq)
{
    static int flag;

    if((pp == NULL)&&(qq == NULL))
    flag = TRUE;
    else
    {
        if((pp!=NULL)&&(qq!=NULL))
        {
            if(pp->data!=qq->data)
            flag = FALSE;
            else{
                compare(pp->l,qq->l);
                compare(qq->r,qq->r);
            }
        }
    }
    return (flag);
}

void tree::operator=(tree t)
{
    p = copy (t.p);
}

tree::node *tree::copy (node *q)
{
    node *t;
    if(q!=NULL)
    {
            t = new node;
            t->data = q->data;
            t->l= copy(q->l);
            t->r= copy(q->r);
            return (t);
    }
    else
    return (NULL);
}

int main()
{
    tree tt,ss;int i,num;
    for(i=0;i<=6;i++)
    {
        cout<<endl<<"Enter the data for the node to be inserted";
        cin>>num;
        tt.insert (num);
    }

    tt.traverse();
    ss=tt;
    ss.traverse();

    if(ss==tt)
    cout<<endl<<"Trees are unequal"<<endl;
    else
    cout<<endl<<"Trees are unequal"<<endl;
    return 0;
}

/*
    In this program the binary tree has been implemented as a linked structure in which each node has two links,
    one pointing to the left child of that node (this link is null if there is no left child), and another pointing  
    to the right child (if there is one). Access to any node in the tree is possible through a pointer to the root of the tree.


    In addition to the constructor there are six more member functions in the class. There names and purposes are as:- 
        1) search() : Searches the place where the node can be inserted in the binary search tree.
        2) insert() : Inserts a new node at appropriate place in the BST.
        3) traverse(): Displays a menu permitting the user to select the method of traversal of BST.
        4) in() : Traverses the BST according to inorder traversal
        5) pre(): Traverses the BST according to preorder traversal
        6) post(): Traverses the BST according to postorder traversal
        7) operator == () : Invokes the compare() function for comparing the contents of two BSTs.
        8) compare() : Recursive function which checks whether two BSTs are identical.
        9) operator = () : Invokes the copy() function to copy contents of one BST into another.
        10) copy() : Recursive function which copies the contents of one BST into another.

*/

/*
    Linked list is a very useful structure for processing dynamic lists whose maximum sizes are not known in advance and 
    whose sizes change significantly beacuse of repeated insertions and deletions.
    However, to search an item in a linked list we have to traverse the entire list. To overcome this disadvantage we can 
    use a binary search tree, which makes the searching efficient at the same time maintaining the flexibility of a linked
    structure.
*/