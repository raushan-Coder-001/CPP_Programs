 #include<iostream>
 using namespace std;

 
 int main()

 {
    int n;
    cout << "Enter the number :" <<endl;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        if(n%2==0)
        sum = sum + n;
        n--;
    }
    
    cout << sum;
    return 0;
 }
