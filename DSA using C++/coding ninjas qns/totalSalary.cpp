 #include <iostream>
 #include <cmath>
 using namespace std;

 int main() {
    int basic_salary;
    //cin >> basic_salary ;
    //cout  << (int)basic_salary;



    int allow;
    char ch;
    cin >> basic_salary >> ch;
    float hra = (basic_salary * .2);
    float da = (basic_salary * .5);
    float pf = (basic_salary * .11);
    if(ch == 65) {
        allow = 1700;
    }
    else if (ch == 66) {
        allow = 1500;
    }
    else {
        allow = 1300;
    }

    float total_salary = basic_salary + hra + da + allow - pf;
    
    cout << (int)round(total_salary) << endl;
 }