 #include<iostream>
 using namespace std;

 int countDistinctWayToClimbStair(long long nStairs) {
    // base case 
    if(nStairs < 0) {
        return 0;
    }
    if(nStairs == 0) {
        return 1;
    }

    // recursive relation
    long long int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    return ans;
 }

 int main() {
    long long int nStairs;
    cout << "Enter the number fo staris --> " << endl;
    cin >> nStairs;
    cout << countDistinctWayToClimbStair(nStairs);
    return 0;
 }