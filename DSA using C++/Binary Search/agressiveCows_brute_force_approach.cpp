 #include<bits/stdc++.h>
 using namespace std;

 bool isPossible(int currDist, int POS[], int numStalls, int numCows) {
    int prevPos = POS[0]; // place the first cow at the first stall
    int numCowsPlaced = 1;

    for(int i = 1; i < numStalls; i++) {
        // check if the distance is greater than or eql to currDis
        if(POS[i]-prevPos >= currDist) {
            prevPos = POS[i]; // update prevPos
            numCowsPlaced++;
        }
        if(numCowsPlaced == numCows) {
            return true;
        }
    }
    return false;
 }

 int largestMinimumDistance(int numStalls, int numCows, int POS[]) {
    //sort the array POS
    sort(POS, POS + numStalls);
    int maxDist = POS[numStalls - 1] - POS[0];
    int minDist = 1;
    int largestMin = minDist; // initilaize it with minDist

    for(int currDist = minDist; currDist <= maxDist; currDist++) {
        if(isPossible(currDist, POS, numStalls, numCows)) {
            largestMin = currDist;
        }
    }
    return largestMin;
 }

 int main() {
    int numStalls = 5; 
    int numCows = 3;
    int POS [numStalls] = {4,2,1,3,6};

    cout << "The largest minimum distance possible is: " << largestMinimumDistance(numStalls, numCows, POS)<< endl;
 }