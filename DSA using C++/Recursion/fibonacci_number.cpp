 #include<iostream>
 using namespace std;

 int fib(int n) {
    // here zero is the zero-th term
    // base case 
    if(n == 0) 
        return 0;
    
    if(n == 1) 
        return 1;
    
    // recursive relation  It has linear time complexity
    int ans = fib(n-1) + fib(n-2);
    return ans;
 }

 int main() {
    int n;
    cout << "Enter the index of fibonacci number to find it --> ";
    cin >> n;
    cout << fib(n);
 }