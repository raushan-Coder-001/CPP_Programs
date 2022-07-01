 #include<iostream>
 #include<algorithm>
 using namespace std;

 bool isPossible (int arr[], int size, int key, int mid) {
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i = 0; i < size; i++) {
        if(arr[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == key) {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
 }

 int aggressiveCows (int arr[], int size, int key) {
   int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int s = 0;

    int maxi = -1;
    for(int i = 0; i < size; i++){
        maxi = max(maxi, arr[i]);
    }
     int e = maxi;
    int ans = - 1;
    int mid = s + (e - s)/2;

    while (s <= e) {
        if (isPossible(arr,size,key,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
 }

 int main() {
    int arr[5] = {1,2,3,4,6};
    
    // here k is the number of cows.
    cout << aggressiveCows(arr,5,2);
    
 }