 #include <iostream>
 #include <deque>
 using namespace std;

 int main() {

    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    for(auto i : d) {
        cout << i << " ";
    }
    cout <<endl;

   /* d.pop_back();
   d.pop_front();

    for(int i : d) {
        cout << i << " ";
    }
    cout <<endl;
    */

   cout << "Print First Index element --> " << d.at(1) <<endl;
   cout << "Print First element in deque --> " << d.front() << endl;
   cout << "Print Last Index element --> " << d.back() <<endl;
   cout << "Empty or not --> " << d.empty() <<endl;

   //Erasing
   cout << "Before erasing --> ";
   for(int i : d) {
    cout << i << " ";
   }
   cout << ". Size is :  " << d.size() << endl;
    cout << "Maximum size is --> " << d.max_size() <<endl;
   

    d.erase(d.begin(),d.begin() + 1); 
    //Erase need the initiator index d.begin() and the number of elements which is to be deleted.
   cout << "After erasing --> ";
   for(int i : d) {
    cout << i << " ";
   }
   cout << ". Size is : " << d.size() << endl;
   cout << "Maximum size is --> " << d.max_size() ; 
   // max_size is the maximum size of deque storage before and after clear.
 }