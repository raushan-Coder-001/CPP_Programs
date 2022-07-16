 #include<iostream>
 using namespace std;


// NOTE: never use global variable bacause any fn can update it
// It is bad practice.
// use reference variables insted of it.
 int score = 15;

 void a(int& i) {
    cout << score << " In a " << endl;

    char ch = 'a';
    cout << i << endl;
 }

 void b(int& i) {
    cout << score << " In b " << endl;
    cout << i << endl;
 }

 int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);
    return 0; 
 }