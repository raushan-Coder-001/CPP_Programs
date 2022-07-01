#include<iostream>
using namespace std;
int main()
{
    char data;
    cout << "Enter the data :\n";
    cin >> data;
{
    if(data >= 48 && data <= 57 )
    {
        cout << "Data is Numeric.";
    }
    else if(data >= 65 && data <= 90)
    {
        cout<<"Data is Upper case.";
    }
    else if(data>= 97 && data <= 122)
    {
        cout<<"Data is Lower case.";
    }
    else 
        {
            cout<< "Symbol";
        }
}
    return 0;
}