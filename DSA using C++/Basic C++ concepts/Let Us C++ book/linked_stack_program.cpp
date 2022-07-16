#include<iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};
class stack 
{
    private :

        node *top ;

    public :

        stack ()
        {
            top = NULL;
        }

        void push (int item)
        {
            node *temp;

            temp = new node;
            if (temp == NULL)
            cout<<endl<<"Stack is full.";
            temp -> data = item;
            temp -> link = top;
            top = temp;
        }

        int pop()
        {
            if(top == NULL)
            {
                cout<<endl<<"Stack is empty.";
                return NULL;
            }

            node *temp;
            int item;

            temp = top;
            item = temp->data;
            top = top->link;
            delete temp;
            return item;
        }

        ~stack()
        {
            if(top == NULL)
            return ;

            node *temp;

            while(top != NULL)
            {
                temp = top;
                top =top->link;
                delete temp;
            }
        }
};

int main()
{
    stack s;

    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    int i = s.pop();
    cout<<endl<<"Item popped = "<<i;

    i = s.pop();
    cout<<endl<<"Item popped = "<<i;

    i = s.pop();
    cout<<endl<<"Item popped = "<<i<<endl;
    return 0;
}

