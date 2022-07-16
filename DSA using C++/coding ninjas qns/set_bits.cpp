 #include<iostream>
 using namespace std;

 int countBits(int n) {
    if(n == 0) 
    return 0;
    return (n&1) + countBits(n>>1);
 }

 int main() {
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
 }