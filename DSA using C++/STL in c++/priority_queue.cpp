 #include <iostream> 
 #include <queue>
 using namespace std;

 int main() {
    // max heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int,vector<int>, greater<int> > mini;

    maxi.push(44);
    maxi.push(6);
    maxi.push(5);
    maxi.push(2);
    maxi.push(0);
    maxi.push(1);

    cout << "Size --> " << maxi.size() <<endl;
    int n = maxi.size();
    for(int i = 0; i < n; i++) {
        cout << maxi.top() <<" ";
        maxi.pop();
    }
    cout <<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    
    cout << "Size --> " << mini.size() <<endl;
    int m = mini.size();
    for(int i = 0; i < m; i++) {
        cout << mini.top() << " " ;
        mini.pop();
    }
    cout <<endl;
    cout << "Empty or not --> " << mini.empty();
    return 0;
 }