 // when function body is of one line then we use inline 
 // It makes our code more readable and more optimized
 // Here function call is replaced by function body.
 #include<iostream>
 using namespace std;

 inline int getMax(int a, int b) {
    return (a > b) ? a : b ;
 }

 int main() {
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a,b);
    cout << ans << endl;

    a+=3;
    b+=1;
    
    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
 }

