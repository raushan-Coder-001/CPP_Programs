 #include<iostream>
 using namespace std;


 void update(int **ptr) {
    **ptr += 1;
 }


 int main() {
    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;

    cout << "The value of i :" << endl;
    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr1 << endl;

    cout << "The address of i :" << endl;
    cout << &i << endl;
    cout << ptr << endl;

    cout << "The address of ptr : " << endl;
    cout << &ptr << endl;
    cout << ptr1 << endl;

    cout << "The address of ptr1 : " << endl;
    cout << &ptr1 << endl;


    update(ptr1);
    cout << i << endl;
 }