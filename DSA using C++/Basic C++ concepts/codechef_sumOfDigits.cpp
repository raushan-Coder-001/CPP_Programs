#include<sstream>
#include<iostream>
using namespace std;
int main()
{
    int T ; cin>>T;
    while(T--)
    {
int n; cin >> n;
ostringstream str1;
str1<<n;
string s = str1.str();  //string of numbers.

long long int sum = 0;
int len = s.length();
for(int i =0;i<len;i++)
{
    char x = s[i];     //119
    int p = x;          //119
    p = p - 48;     //we get digits 119-48 = 2
    
    sum = sum + p;
}
cout<<sum<<endl;
    }
}