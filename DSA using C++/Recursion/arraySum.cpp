 #include<iostream>
 using namespace std;

 int arrSum(int *arr, int size) {
    // base case 
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return arr[0];
    }
    int sum = 0;
    int remainingPart = arrSum(arr+1, size-1);
    sum = arr[0] + remainingPart;
    return sum;
 }

 int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int sum =  arrSum(arr,5);
    cout << "Sum is -- > " << sum ;
 }