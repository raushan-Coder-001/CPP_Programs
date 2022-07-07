 #include<iostream>
 using namespace std;

 long long int sumOrProduct(long long int n, long long int q)
{
	
    if (q == 2) {
        const unsigned int M = 1000000007;
       long long int product = 1;
        for (long long int i = 1; i <= n; i++) {
            product = (product * i)%M;  // right approach
        }
        return product % M; // wrong approach
    }
    else{
        long long int sum = 0;
        for (long long int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        return sum;
    }
}

int main() {
    int n,q;
    cin>>n,q;
    cout << sumOrProduct(n,q);
}