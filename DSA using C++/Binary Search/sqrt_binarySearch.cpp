 #include<iostream>
 using namespace std;
 
 long long int binarySearch(int n) {
    int s = 0, e = n;
    long long int mid = s + (e - s)/2, ans = -1;

    while(s <= e) {
        long long int square = mid * mid ; // for value less than pow(2,32) - 1.
        if(square == n) 
            return mid;

        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
        }
        return ans;
    }
 

 int sqrt (int x) {
    return binarySearch(x);
 }

 double morePresision (int n, int presision, int tempSol) {
    double factor = 1, ans = tempSol;
    for(int i = 0; i < presision; i++) {
        factor /=10;
        for(double j = ans; j*j < n; j+=factor) {
            ans = j; 
        }
    }
    return ans;
 }


 int main() {
    int n, presision;
    cout<<"Enter the number to find the square root: ";
    cin>>n;
    cout<< "The temp_ans is: "<<sqrt(n);
    int tempSol = sqrt(n);
    cout << "\nEnter the presision: "<<endl;
    cin>>presision;
    cout<<"Ans is : "<<morePresision(n,presision,tempSol);
    return 0;
 }