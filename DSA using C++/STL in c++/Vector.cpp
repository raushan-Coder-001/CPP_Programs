 #include <iostream> 
 #include <vector>
 using namespace std;

 int main() {
    vector<int> v;
    cout << "Capacity --> " << v.capacity() <<endl;
    v.push_back(1);
    cout << "Capacity --> " << v.capacity() <<endl;
    v.push_back(2);
    cout << "Capacity --> " << v.capacity() <<endl;
    v.push_back(3);
    // Capacity = memory assigned and Size = elements present.
    cout << "Capacity --> " << v.capacity() <<endl;
    cout << "Size --> " << v.size() <<endl;

    cout << "Element at second index --> " << v.at(2) <<endl;
    cout << "First Element --> " << v.front() <<endl;
    cout << "Last Element --> " << v.back() <<endl;

    cout << "Before pop --> ";
    for(int i:v) {
        cout << i << " ";
    }
    cout <<endl;

    v.pop_back();
    cout << "After pop --> ";
    for(int i:v) {
        cout << i << " ";
    }
    cout <<endl;

    cout << "Before clearing size --> " << v.size() <<endl;
    
    v.clear();
    cout << "After clearing size --> " << v.size() <<endl;

    vector<int> a(5,1); //size of a is 5 and all elements are 1.
     cout << "Print a --> ";
    for(int i:a) {
        cout << i << " ";
    }
    cout <<endl;

    vector<int> b(a); // this will copy all elements of a in b.
     cout << "Print b --> ";
    for(int i:b) {
        cout << i << " ";
    }
    cout <<endl;
   return 0;
 }