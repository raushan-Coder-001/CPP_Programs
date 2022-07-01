 #include <iostream>
 using namespace std;

 int binarySearch (int arr[], int s, int e, int key) {
    int start = s, end = e, mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return key;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
 }

 int getPivot (int arr[], int size) {
    int s  = 0, e = size - 1, mid = s + (e - s)/2;

    while(s < e) {
        if(arr[mid] >= arr[0])
        {
            mid = s;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
    
 }

 int findPosition (int arr[], int size, int key) {
    int pivot = getPivot(arr,size);
    if(key >= arr[pivot] && key <= arr[size - 1]) {
         return binarySearch(arr,pivot,size - 1,key);
    }
    else {
        return binarySearch(arr,0,pivot,key);
    }
 }

 int main()
 {
    int arr[6] = {7, 8, 9, 1, 2, 3};

    findPosition(arr,6,1);

    return 0;
 }