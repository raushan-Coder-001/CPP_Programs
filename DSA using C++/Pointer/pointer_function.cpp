 #include<iostream>
 using namespace std;

 void print(int *p) {
    cout << "Its address is --> " << p << endl;
    cout << "Its value is --> " << *p << endl;
 }

 void update(int *p) {
    // updating the pointer will only in scope of this function 
    *p = *p + 1; // We can't increment the value when line 12 is above line 11.
    // Or if it is above then we just have to comment p+=1; because it will change the pointer.
    p+=1; 

    // updating the value present at that pointer will update the value
    // in global range(in main also).
    
 }

int getSum(int *arr, int size) {            // int *arr = int arr[] here, both denotes pointer
    cout << "Size of array pointer is--> " << sizeof(arr) << endl;
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += i[arr];  // arr[i] = *(arr + i);
    }
    cout << "Sum of elemnts of array is --> ";
    return sum;
}


 int main() {
  /*
    int value = 5;
    int *p = &value;
    print (p);
    cout << "before --> " << p << endl;
    update(p);
    cout << "after --> " << p << endl; //result in same address (see line 10).   
    
    cout << "After value --> " << *p << endl; 
  */
    int arr[5] = {1,2,3,4,5};
    cout << getSum(arr,5) << endl; 
 }