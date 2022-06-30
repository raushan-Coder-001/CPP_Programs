 #include<iostream>
 using namespace std;
 
 int sumArray(int arr[],int n)
 {
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
 }
 int main()
 {
    int size;
    cout << "Enter the size of array: ";
    cin >>size;
    cout << "Enter the elements of array:"<<endl;
    int arr[100];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of elements of the array is: " <<sumArray(arr,size);
    return 0;
 }