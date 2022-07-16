 #include<iostream>
 using namespace std;

 int solve (int *arr, int s, int e, int key) {
    // base case
    // element not found. 
    if(s > e) {
        return -1;
    }

    int mid = s + (e - s)/2;
    // element is found.
    if(arr[mid] == key) {
        return mid;
    }
    if(arr[mid] < key) {
        return solve(arr, mid+1, e, key);
    }
    if(arr[mid] > key) {
        return solve(arr, s, mid-1, key);
    }
 }

 int binarySearch(int *input, int n, int val) {
    int ans = solve(input, 0, n-1, val);
    return ans;
 }

 int main() {
    int input[5] = {1,2,3,4,5};
    int n = 5;
    int key = 5;
    cout << "Index of element at which key is present --> " <<binarySearch(input, n, key);
   
    return 0;
    
 }