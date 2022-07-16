 #include<iostream>
 using namespace std;

 void print(int *arr, int n, int start = 0) {
    //here start = 0 is default args
    // always make default args from righ parameters.
    
    for(int i = start; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
 }

 int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    print(arr,size);
    print(arr,size,2);

    return 0;
 }