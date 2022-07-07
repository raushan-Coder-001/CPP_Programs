 #include <iostream>
 using namespace std;

 int modularExponentiation (int x, int n, int m) {
    int res = 1;

    while (n > 0) {
        if (n&1) {
            //odd
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;

 }

 int main() {
    int a,b,M;
    cout << "Enter the value of x, n and m --> ";
    cin >> a>>b>>M;
    cout << "\nThe containing the value of ('a' ^ 'b') % 'M'--> "<< modularExponentiation(a,b,M);
 }