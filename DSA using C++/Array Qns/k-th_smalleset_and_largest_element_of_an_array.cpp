 #include<iostream>
 #include<vector>
 using namespace std;

 
 void print(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
 }

 vector<int> kthSmallLarge(vector<int> arr, int n, int k)
{
	// Write your code here.
    int max = arr[arr.size()-1];
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if(arr[i] < min) {
            min = arr[i];
        }
    }
    vector<int> ans;
    ans.push_back(arr[k-1]);
    ans.push_back(arr[n-k+1]);
    return ans;    
}


int main() {
    int arr[4] = {1,2,5,4};
    vector <int> ans = kthSmallLarge(arr,4,3);
    print(ans);
}