 #include<iostream>
 using namespace std;

// Insertion sort is a stable algorithm
 void insertionSort (int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                //shift 
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
 }

 int main() {
    int arr[6] = {5,3,77,6,2,1};
    insertionSort(arr,6);
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
 }