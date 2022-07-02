 #include <iostream>
 #include <map>
 using namespace std;

 int main() {
    map<int,string> m;

    m[1] = "Raushan";
    m[2] = "Kumar";
    m[3] = "coder";
    m[4] = "Tuf";
    m[5] = "Gaming";

    m.insert({13,"Valorant"});

    cout << "Before erase --> " << endl;
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding -13 --> " << m.count(-13) <<endl;

    //m.erase(2);

    cout << "After erase "<<endl;
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout <<endl<<endl;

    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++) {
        cout << (*i).first << " " << (*i).second <<endl;
    }
    return 0;
 }