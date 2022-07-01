#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // goto right part.
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;                            
    }
    return -1;
}
int main()
{
    int even[6] = {2, 3, 4, 5, 6, 8};
    int odd[5] = {3, 55, 64, 77, 87};

    int evenIndex = binarySearch(even, 6, 5);

    cout << "Index of 5 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 64);

    cout << "Index of 64 is : " << oddIndex << endl;

    return 0;
}