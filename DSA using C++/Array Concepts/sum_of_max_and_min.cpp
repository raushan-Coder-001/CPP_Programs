 #include <iostream>
 using namespace std;

 int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int max = arr[n-1];
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if(arr[i] < min) {
            min = arr[i];
        }
    }
    int sum = min + max;
    return sum;
}

int main() {
    int arr[5] = {4,3,52,1,9};
    cout << sumOfMaxMin(arr,5);
}