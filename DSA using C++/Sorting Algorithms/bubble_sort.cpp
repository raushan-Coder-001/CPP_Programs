 #include <iostream>
 using namespace std;


//Bubble sort time complexity is O(n^2).And it's space complxity const.
//Its best case complexity for time is omega(n).

/* In Place: Bubble sort, Selection Sort, Insertion Sort, Heapsort.
Not In-Place: Merge Sort. Note that merge sort requires O(n) extra space.
What about QuickSort? Why is it called In-Place? 
QuickSort uses extra space for recursive function calls.
 It is called in-place according to broad definition as extra space required
  is not used to manipulate input, but only for recursive calls.
*/
 void  bubbleSort(int arr[], int n) {
   for(int i = 1; i < n; i++) {
      bool swapped = false;
      for(int j = 0; j < n - i; j++) {
         if(arr[j]>arr[j+1]) {
            swap (arr[j],arr[j+1]);
            swapped = true;
         }
      }
      if(swapped == false) 
      break;
   }
 }

  int main() {
    int arr[5] = {5,3,55,2,1};
     bubbleSort(arr,5);
     for(int i = 0; i < 5; i++) {
      cout <<arr[i]<<" ";
     }
    return 0;
 } 