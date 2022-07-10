 #include<iostream>
 using namespace std;

 const int MAX = 25;

 class stack //base class 
 {
     protected :

        int s[MAX];
        int top;

    public :

        stack()
        {
            top =- 1;
        }

        void push (int num)
        {
            top++;
            s[top] = num;
        }
        
        int pop()
        {
            int num;
            num = s[top];
            top--;
            return (num);
        }
 };

 class stack1 : public stack //derived class
 {
     public :

        void push (int num)
        {
            if(top == MAX-1)
            cout<<endl<<"Stack is full";
            else
                stack::push(num); // calls push() of base class
        }

        int pop()
        {
            int n;
            if(top ==  -1)
            {
                cout<<endl<<"Stack is empty";
                return NULL;
            }
            else 
            {
                n = stack::pop(); // calls pop() of base class
                return (n);
            }
        }
 };

 int main()
 {
     int n;
     stack1 stk;

     stk.push(10);
     stk.push(20);
     stk.push(30);
     n = stk.pop();
     cout<<endl<<n;

     n = stk.pop();
     cout<<endl<<n<<endl;
     return 0;
 }

 /*
    In this program the base class stack has the capability to push items on the stack and pop item off it. 
    However, the stack::push() function doesn't consider the fact if the stack is full.
    Or the function stack::pop() doesn't consider the fact if the stack is empty.
    The stack1 has provided the both problem's solution that it will give output as "Stack is full" or "Stack is empty".
    It is derived from the class stack, hence it inherit all the property of base class. 
    Note:Even the names of the functions in both the classes are same. This is legal. When the push() function is called
    from the main() through the statement, stk.push(10); it is the push() function of the stack1 class that gets called. 
    This is because when a base class and a derived class have the public member functions with the same  name and 
    argument lists, the function in the derived class gets a priority when the function is called as a member of the 
    derived class object. In stack1::push() it is a message indicating this is flashed. Howerver, if the stack is
    not full then insted of implementing the logic for adding the element to the stack, it is simple calls the base class 
    push() function through the statement :    stack::push(num);
    Thus using inheritance we have provided additional functionality to the stack without modifying the base class.
*/