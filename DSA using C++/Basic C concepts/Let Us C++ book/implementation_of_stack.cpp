 #include<iostream>
 using namespace std;

 #define MAX 10

 class stack
 {
     private :

        int arr[MAX];
        int  top;
    
     public  :

        stack ()
        {
            top -1;
        }  

    void push (int item)
    {
        if(top == MAX -1)
        {
            cout<<endl<<"Stack is full";
            return ;
        }

        top ++;
        arr[top] = item;
    }

    int pop()
    {
        {
        if(top == -1)
        cout<<endl<<"Stack is empty";
        return  NULL;
        }

     int data = arr[top];
     top--;

         return data;
    }
    
 };

 int main()
{

    cout<<"Hi I am raushan"<<endl;
    stack s;

    s.push (11);
    s.push (12);
    s.push (13);
    s.push (14);
    s.push (15);
    s.push (16);
    s.push (17);
    s.push (18);
    s.push (19);
    s.push (20);
    s.push (21);


    int i = s.pop ();
    cout<<endl<<"Item popped = "<<i;

    i = s.pop ();
    cout<<endl<<"Item  popped = "<<i;

    i = s.pop ();
    cout<<endl<<"Item popped = "<<i;

    i = s.pop ();
    cout<<endl<<"Item popped = "<<i<<endl;
    return 0;
}

// I don't know why it is not showing the desired output.

