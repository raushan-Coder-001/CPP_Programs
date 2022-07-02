 #include <iostream> 
 #include <stack>   
 using namespace std;

 int main() {
    stack<string> s;
    s.push("Raushan");
    s.push("Coder");

    cout << "Size of stack is --> " << s.size() <<endl;
    
    cout << "Top element in stack is --> " << s.top() <<endl;

    s.pop();
    cout << "Size of stack becomes --> " << s.size() <<endl;

    s.push("Kumar");
    cout << "Top element in stock now becomes --> " << s.top() <<endl;


    return 0;
 }