 #include<iostream>
 #include<limits.h>
 using namespace std;


 int getMin(int num[],int n)
 {
    int min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }

    //returning min value
     return min;
 }


 int getMax(int num[],int n)
 {
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }

    //returning max value
     return max;
 }


 int main()
 {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements in array: "<<endl;
    
    int num[100];
    
    //Taking input in array
    for(int i = 0; i < size ; i++)
    {
        cin >> num[i];
    }

    cout << "The maximum value is "<< getMax(num,size) <<endl;
    cout << "The minimum value is "<< getMin(num,size) <<endl;

    return 0;
 }