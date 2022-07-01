// Find the first and last occurance of the element in an sorted array

#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {    
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // for first occ end will be move mid - 1
        }
        else if (key > arr[mid])
        {
            start = mid + 1; // go to right
        }
        else if (key < arr[mid])
        {
            end = mid - 1; // go to left
        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {    
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; //for last occ start will move mid + 1
        }
        else if (key > arr[mid])
        {
            start = mid + 1; // go to right
        }
        else if (key < arr[mid])
        {
            end = mid - 1; // go to left
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int odd[5] = {1,3,3,5,6};
    int even[8] = {1,3,4,5,6,6,6,9};

    cout << "First occurence of 3 is at index : " << firstOccurence(odd,5,3) <<endl;
    cout << "First occurence of 6 is at index : " << firstOccurence(even,8,6) <<endl;
    cout << "Last occurence of 3 is at index : " << lastOccurence(odd,5,3) <<endl;
    cout << "Last occurence of 6 is at index : " << lastOccurence(even,8,6) <<endl;

    //For finding the total number of occurence 
    int first = firstOccurence(even,8,6);
    int sec = lastOccurence(even,8,6);
    int totalNum_Occurence = (sec - first) +1;
    cout << "Total number of Occurence of 6 is : "<<totalNum_Occurence;
    return 0;
} 