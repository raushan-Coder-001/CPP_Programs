 #include<iostream>
 #include<limits.h>
 using namespace std;

 int getMax(int num[],int n)
 {
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }
        return maxi;
 }

 int getMin(int num[],int n)
 {
    int mini = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
    }
        return mini;
 }

 int main()
 {
    int size;
    cout <<"Enter the size of array: ";
    cin >> size;
    int num[100];
    cout << "\nEnter the number of elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "The maximum value of this array is : "<< getMax(num,size)<<endl;
    cout << "The minimum value of this array is : "<< getMin(num,size)<<endl;
    return 0;
 }