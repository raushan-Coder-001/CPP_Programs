 //Qn852. Peak index of a mountain array
 //It is calling mountain because the array will shape like mountain when plotting the elements of it on graph.

 #include<bits/stdc++.h>
 using namespace std;

 int PeakIndexAtMountainArray(int arr[],int size)
 {
    int start = 0, end = size - 1, mid = start + (end - start)/2;

    while (start<end)
    {
        if(arr[mid] < arr [mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    cout << "The mountain element is : "<<arr[start]<<endl;
    return start;
 }
 
 int main()
 {
    int mountainArr[9] = {0,2,3,5,9,5,4,2,1};
    cout << "The Index of mountain value is : "<<PeakIndexAtMountainArray(mountainArr,9);
    return 0;
 }