 #include <iostream>
 #include <algorithm>
 #include <vector>
 #include <cmath>

 using namespace std;

 int main() {
    vector<int> v;

    v.push_back(1);
    
    v.push_back(3);
    
    v.push_back(6);

    v.push_back(6);
    
    v.push_back(7);

    cout << "Finding 6 --> " << binary_search(v.begin(),v.end(),6)<< endl;
    cout << "Lower bound of 6 is --> " << lower_bound(v.begin(),v.end(),6)-v.begin() << endl;
    cout << "Upper bound of 6 is --> " << upper_bound(v.begin(),v.end(),6)-v.begin() << endl;

    int i = 3, j =5;
    cout << i << " " << j << endl;
    cout << max(i,j) << min(i,j)<<endl;
    swap(i,j);
    cout << i << " " << j << endl;
    string s = "hello";
    cout << s<<endl;
    reverse(s.begin(),s.end());
    cout << s <<endl;

    rotate(v.begin(),v.begin()+1, v.end());
    for(auto i : v) { 
        cout << i << " " ;
    }
    cout << endl;

    sort(v.begin(),v.end());
    //Sort working introsort:  quick sort heap sort insertion sort
     for(auto i : v) { 
        cout << i << " " ;
    }
    cout << endl;



 }