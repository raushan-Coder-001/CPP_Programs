 #include <iostream>
 using namespace std;

 void print(int *arr, int s, int e) {
    for(int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 }

 
 bool binarySearch(int *arr, int s, int e, int key) {
    print(arr,s,e);
    // base case 

    // element not found
    if(s > e) {
        return false;
    }

    int mid = s + (e - s) / 2;

    // element found
    if(arr[mid] == key) {
        return true;
    }

    if(arr[mid] < key) {
        return binarySearch(arr, mid+1, e, key);
    }
    else {
        return binarySearch(arr, s, mid-1, key);
    }
 }

 int main() {
    int arr[5] = {1,2,3,4,5};
    int key = 5;
    bool ans = binarySearch(arr,0,4,key);
    if(ans) {
        cout << "Key is present.";
    }
    else {
        cout << "Key is absent.";
    }
    return 0;
 }