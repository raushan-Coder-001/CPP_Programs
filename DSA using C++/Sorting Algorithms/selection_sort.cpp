 #include <iostream>
 using namespace std;
 
 //Space and Time complexity of Selection Sort are theta(1) and theta(pow(n,2)).
 // Used when size of array, vector, etc is small.
 // It works good in small sized arrays, vectors.

 /* Several common sorting algorithms are stable by nature, such as Merge Sort, Timsort, Counting Sort, Insertion Sort, and Bubble Sort. Others such as Quicksort, Heapsort and Selection Sort are unstable.
 The stability of a sorting algorithm is concerned with how the algorithm treats equal (or repeated) elements. Stable sorting algorithms preserve the relative order of equal elements, while unstable sorting algorithms don’t. In other words, stable sorting maintains the position of two equals elements relative to one another. */


 void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) 
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 }

 int main() {
    int arr[5] = {5,3,55,2,1};
     selectionSort(arr,5);
    return 0;
 }