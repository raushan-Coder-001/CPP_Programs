 #include<iostream>
 using namespace std;

 int main() {
    int n = 5;
    cout << "The value of n is --> " << n <<endl;

    // address of operator - &

    // int *ptr ; it  is the bad practice, good practice is in which we initialize the pointer to null
    // like int *ptr = 0;

    cout << "Address of n is --> " << &n <<endl;
    int *ptr = &n;
    cout << "Address of value of n at ptr is --> " << ptr <<endl;
    cout << "Value of n at the dereference at ptr address is --> " << *ptr <<endl;

    double d = 4.3;
      cout << "The value of d is --> " << d <<endl;


    cout << "Address of d is --> " << &d <<endl;
    double *ptr1 = &d;
    cout << "Address of value of d at ptr1 is --> " << ptr1 <<endl;
    cout << "Value of d at the dereference at ptr1 address is --> " << *ptr1 <<endl;

    // Size of a pointer is fixed 8 bits(normally).
    cout << "Size of integer is --> " << sizeof(n) << endl;
    cout << "Size of double is --> " << sizeof(d) << endl;
    cout << "Size of pointer ptr(interger type) is --> " << sizeof(ptr) << endl;
    cout << "Size of pointer ptr1(double type) is --> " << sizeof(ptr1) << endl;


    // Copying a pointer 
    int *q = ptr;
    cout << "The new q pointer has the address of pointer ptr which is of n --> " << q << endl;
    cout << "The new pointer q points the same value which has the same address --> " << *q << endl;



    // Important Concepts
    cout << "Before q pointer is --> " << q << endl;
    q += 1;
    cout << "After q pointer shifts by 4 -- > " << q << endl;

    // For incrementing the real value of n through ptr
    int i = 3;
    int *ptr2 = &i; 
    //same as line 56, *ptr2 = *ptr2 + 1;
    cout << "After incrementing the value the new value of i is --> " << *ptr2 << endl;
     
    // increminting the pointer
    q+=1;
    cout << "*q after incrementin by 1 increase by 4 bits --> " << q << endl;
    // incrementing the value in pointer 
    (*ptr2)+=1;    // here () is optional to make code more readable.
    cout << "The value of refered by pointer ptr2 which is 3, after incrementing by 1 becomes --> " << *ptr2 << endl;
    return 0;
 }