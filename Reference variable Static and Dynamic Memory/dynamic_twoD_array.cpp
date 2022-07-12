 #include<iostream>
 using namespace std;

 int main() {

    int row,col;
    cout << "Enter the number of rows and columns of the matrix--> ";
    cin >> row>>col;

    int **arr = new int*[row];

    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    // creation done
    cout << endl;
    cout << "Enter the elements of the "<< row << " * " << col << "matrix--> " ;
    //taking inputs
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
        cout<< endl;
    
    //taking output
    cout << "The desired matrix is : " << endl;
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory
     for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            delete []arr;
        }
    }
    return 0;
 }