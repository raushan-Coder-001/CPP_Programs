 #include <bits/stdc++.h>
 using namespace std;


 bool search(int arr[], int size, int key)
 {
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        } 
    }
    return 0;
 }
 int main()
 {
    int arr[10] = {13, 34, 55, 66, 22, 32, 36, 75, 2, 1};
    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    bool found =  search(arr,10,key);
    if(found)
    {
        cout << "Key is found.";
    }
    else
    {
        cout << "Key is absent.";
    }
    return 0;
 }