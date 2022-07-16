 #include <bits/stdc++.h>
 using namespace std;

 bool isPossible(int currDist, int POS[], int numStalls, int numCows) {
    int prevPos = POS[0]; 
    int numCowsPlaced = 1;

    for(int i = 1; i < numStalls; i++) {
        if(POS[i]-prevPos >= currDist) {
            prevPos = POS[i];
            numCowsPlaced++;
        }
        if(numCowsPlaced == numCows) {
            return true;
        }
    }
    return false;
 }


 int largestMinimumDistance(int numStalls, int numCows, int POS[]) {
    sort(POS,POS + numStalls);
    int high = POS[numStalls-1] - POS[0];
    int low = 1;
    int largestMin = low;

    while(low <= high) {
        int mid = low + (high - mid)/2;
        if(isPossible(mid, POS, numStalls, numCows)) {
            largestMin = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return largestMin;
 }

 int main() {
    
 int numStalls = 5;
 int numCows = 3;
 int POS[numStalls] = {4,2,1,3,6};

 cout << "The largest minimum distance possible is --> " << largestMinimumDistance(numStalls, numCows, POS) << endl;

 return 0;
 }