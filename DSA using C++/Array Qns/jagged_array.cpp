 #include<bits/stdc++.h>
 using namespace std;

 int main() {
    int row0[4] = {1,2,3,4};
    int row1[2] = {5,6};

    int* jagged[2] = {row0, row1};

    // Array to hold the size of each row
    int size[2] = {4,2}, k = 0;

    // To display elements of Jagged array 
    for(int i = 0; i < 2; i++) {

        //pointer to hold the address of the row
        int* ptr = jagged[i];

        for(int j = 0; j < size[k]; j++) {
            cout << *ptr << " ";
            // move the pointer to the next element in the row
            ptr++;
        }

        cout <<"\n";
        k++;

        // move the pointer to the next row
        jagged[i]++;
    }
    return 0;
 }