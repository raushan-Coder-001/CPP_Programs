 #include<iostream>
 using namespace std;

 bool isPossible (int arr[], int n, int m, int mid) {
    int painterCount = 1;
    int wallSum = 0;

    for(int i = 0; i<n; i++) {
        if(wallSum + arr[i] <= mid) {
            wallSum += arr[i];
        }
        else {
            painterCount ++;
            if(painterCount > m || arr[i] > mid) {
                return false;
            }
            wallSum = arr[i];
        }
    }
    return true;
}


int painterPaints (int arr[], int n, int m) {
    int s = 0, sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s<=e) {
        if (isPossible(arr,n,m,mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}


 int main() {
 int painter;
    int arr[4] = {10, 20, 30, 40};
    int wallCount,walls;
    cout <<"Enter the number of painters: "<<endl;
    cin >> painter;
    cout <<"Enter the number of walls: "<<endl;
    cin >> walls;
    cout << "The wall allocated to the painter in the manner in which the maximum number of walls assigned to a painter is minimum is: "<<painterPaints(arr,4,2)<<endl;

    return 0;
   

 }