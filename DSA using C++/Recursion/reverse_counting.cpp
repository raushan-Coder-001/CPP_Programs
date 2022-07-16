 #include<iostream>
 using namespace std;

 // head recursion
 void print1 (int n) {
    //base case
    if(n == 0) {
        return ;
    }

    //recursive relation
    print1(n-1);
    cout << n << endl;
 }


// tail recursion
 void print (int n) {
    // base case
    if(n == 0) {
        return ;
    }

    cout << n << endl;

    // recursive relation
    print(n-1);
 }

 int main() {
    int n;
    cout << "Enter the number --> ";
    cin >> n;

    cout << "In decreasing order" <<endl;
    print (n);
    cout << "In increasing order" <<endl;
    print1 (n);

    return 0;
 }