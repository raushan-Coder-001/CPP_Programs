 #include <iostream> 
 #include <list>    
 using namespace std;

 int main() {
    list<int> l;
    l.push_back(1);
    l.push_front(0);
     for(int i : l) {
        cout << i << " ";
    }
    cout <<endl;
    cout << "Element at first Index is --> " << l.front() <<endl;
    cout << "Element at last Index is --> " << l.back() <<endl;

   /* l.pop_back();
      for(int i : l) {
        cout << i << " ";
    }
    cout <<endl;
     */

    //Erasing
    l.erase(l.begin());
    cout << "After erasing --> ";
     for(int i : l) {
        cout << i << " ";
    }
    cout <<endl;

    list<int> n(5,100);
     for(int i : n) {
        cout << i << " ";
    }
    cout <<endl;

    list<int> copyL(l);
     for(int i : l) {
        cout << i << " ";
    }
    return 0;
 }