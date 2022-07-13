 #include <iostream>
 using namespace std;

 
 bool binarySearch(int *arr, int s, int e, int key) {

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
    cout << "Present or not --> " << binarySearch(arr,0,4,key);
    return 0;
 }