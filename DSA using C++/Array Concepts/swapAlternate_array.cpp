 #include<iostream>
 using namespace std;


 void swapAlternate(int arr[], int size)
 {
    for(int i = 0; i < size - 1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
 }
 
 void printArray(int arr[],int size)
 {
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

 }
 int main()
 {
    int even[8] = {55, 64, 24, 32, 1, 3, 56, 76};
    int odd[5] = {23, 53, 54, 22, 1};

    swapAlternate(even,8);
    swapAlternate(odd,5);

    printArray(even,8);
    printArray(odd,5);

    return 0;
 }