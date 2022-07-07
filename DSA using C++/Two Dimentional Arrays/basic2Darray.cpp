 #include<iostream>
 using namespace std;

//to print largeset row sum and its row Index.
int largestRowSum (int arr[][4],int i,int j) {
    int maxi = INT_MIN ;
    int rowIndex = -1;

      for( i = 0; i < 3; i++) {
        int sum = 0;
        for( j = 0; j < 4; j++) {
            sum += arr[i][j];
        }

        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
        
    }

    cout << "Maximum row sum is --> " << maxi << endl;
    cout << endl << "And it is at rowIndex --> ";
    return rowIndex;
}

//to print row wise sum.
 void printSum (int arr[][4],int i,int j) {
     for( i = 0; i < 3; i++) {
        int sum = 0;
        for( j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
        cout << endl;
 }

//To check whether the target is present or not in array.
 bool isPresent (int arr[][4],int target,int i,int j) {
     for( i = 0; i < 3; i++) {
        for( j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                return 1;
            }
        }
     }
     return 0;
 }

 int main() {
    int arr[3][4];
    //row wise input
    cout << "Enter the elements of 3*4 array --> ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
        cout << endl;

    //col wise input
     cout << "Enter the elements of 4*3 array --> ";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[j][i];
        }
    }
        cout << endl;
 
    //row wise output
    cout << "The elements of 3*4 array -->" <<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;

    //col wise output
     cout << "The elements of 4*3 array -->" <<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

        cout << endl;
    cout << "Enter the element to search --> ";
    int target;
    cin >> target;

    if (isPresent (arr,target,3,4)) {
        cout << "Element found."<<endl;
    }
    else {
        cout << "Not found."<<endl;
    }
 

    cout << "Row wise sum of array is --> ";
    printSum(arr,3,4);
    cout << endl;
    int ansIndex = largestRowSum(arr,3,4);
    cout << ansIndex;

    return 0;  
 }