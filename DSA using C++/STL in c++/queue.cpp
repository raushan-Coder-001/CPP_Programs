 #include <iostream>
 #include <queue>
 using namespace std;

 int main() {
    queue<string> q;
    q.push("Kumar");
    q.push("Raushan");
    q.push("Coder");

    
    cout << endl;

    cout << "Size of queue is --> " << q.size() <<endl;
    cout << "First element in queue is --> " << q.front() <<endl;
    cout << "Last element in queue is --> " << q.back() <<endl;

    q.pop();
    cout << "Now size is --> " << q.size() <<endl;
    cout << "First element in queue is --> " << q.front() <<endl;
    cout << "Last element in queue is --> " << q.back() <<endl;
    cout<<"Queue element are..."<<endl;
	while(!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}

	cout<<endl;

 }