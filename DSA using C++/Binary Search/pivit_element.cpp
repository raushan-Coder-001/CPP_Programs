 #include<iostream>
 using namespace std;


/* Pivot is the smallest element in array .
 It is a way for binary search of smallest element so that the time 
complexity of this is O(logn) */
 int getPivot (int arr[], int size) {
    
    int s = 0, e = size - 1, mid = s + (e - s)/2 ;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
 }

 int main()
 {
    int arr[6] = {5,4,7,9,1,44};

    cout << "Index of pivot element is "<< getPivot(arr,6);
    return 0;
 }