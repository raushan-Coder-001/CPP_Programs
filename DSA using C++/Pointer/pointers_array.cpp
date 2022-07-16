 #include<iostream>
 using namespace std;

 int main() {
       //Playing with array using pointers
    int arr[10] = {22, 122, 41, 67};

    cout << "Address of first memory block is --> " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is --> " << &arr[0] << endl;

    cout << "Element at second index using pointer is --> " << *(arr + 2) << endl;
    cout << "Address of second index of array is --> " << (arr + 2) << endl;
    cout << "Address of second index of array by other method --> " << &(arr[2]) << endl;
    cout << "Element of second index + 2 is --> " << *(arr + 2) + 2 << endl;

    // arr[i] = *(arr + i); or  i[arr] = *(i + arr);
    int j = 3;
    cout << *(j + arr) << endl;
    cout << j[arr] << endl;
    //both line 20 and 19 implies same thing.

    // In above case we can't do like arr+=1; it gives error. Because of symbol table
    // But we can do like this..
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr+=1;
    cout << ptr << endl;


    // In case of string it will print whole string insted of first character.

    char ch[6] = "abcde";
    cout << "The string is --> " << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *ptr1 = &temp;
    cout << ptr1 << endl; // It will continue printing elements till it finds a null intity.
   
    
    return 0;
 }