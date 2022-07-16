 #include <iostream>
 using namespace std;

 void printArray(int *arr, int n) {
    cout << "Size of array is -- > " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 }


 bool findingKey(int *arr, int size, int key) {
     // base case
     printArray(arr,size);
    if(size == 0) {
        return false;
    }

    if(arr[0] == key) {
        return true;
    }

    else {
        bool remainingPart = findingKey(arr+1, size-1, key);
        return remainingPart;
    }
 }

 int main() {
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int key = 4;
    bool ans = findingKey(arr, size, key);
    if(ans) {
        cout << "Key is found.";
    }
    else {
        cout << "Key is not found.";
    }
   return 0;
 }