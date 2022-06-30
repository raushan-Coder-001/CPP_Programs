 #include <bits/stdc++.h>
 using namespace std;

 int main()
 {
    int arr[10000];
    cout<<"Enter the size of array:"<<endl;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is:"<<endl;
    for(int i =0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    //reverse the array without sorting it.
    cout<<endl<<"Reversed array is:"<<endl;
    for(int i = N-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }