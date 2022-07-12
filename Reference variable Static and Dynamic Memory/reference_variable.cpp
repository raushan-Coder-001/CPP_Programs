 #include<iostream>
 using namespace std;

 int main() {
    int i = 5; 
    // Creating a reference variable
    int &j = i;

    cout << i << endl;
    cout << j << endl;
    cout << i++ << endl;
    cout << ++i << endl;
    cout << j++ << endl;
    cout << j << endl;
    return 0;
 }