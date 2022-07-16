 #include<iostream>
 using namespace std;

 void reachHome(int src, int dest) {
    cout << "source is " <<src << " destination is " <<dest << endl;
    //base case 
    if(src == dest) {
        cout << " reached home";
        return;
    }

    // processing one step at a time
    src++;

    //recursive call
    reachHome(src, dest);

 }

 int main() {
    int src = 1, dest = 10;
    cout << endl;
    reachHome(src,dest);

    return 0;
 }