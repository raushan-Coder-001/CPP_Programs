 #include <iostream>
 #include <set>
 using namespace std;

 int main() {
    set<int> s;

    s.insert(45);
    
    s.insert(33);
    
    s.insert(2);
    
    s.insert(-5);
    
    s.insert(0);

    for(auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++   // to increse the iterator by one .

    s.erase(it);

     for(auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "-5 is present or not --> " << s.count() <<endl; // count is for find.

    set<int>::iterator itr = s.find(33);

    for(auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;


    //Time complexites are for erase, find, insert, count is O(log n) or logarithmic time, and for size, begin, empty, end is in constant time.
    return 0;

 }