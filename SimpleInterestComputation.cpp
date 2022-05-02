#include<iostream>
using namespace std;
int main()
{
    // data structure defination
    int principle;  //principle amount
    int time;   //time in years
    int rate; //rate of interest
    int SimpInt;  //Simple Interest
    int total; //total amount to be paid back after 'time' years 
    cout<< "Enter Principle Amount: ";
    cin >> principle;
    cout<<"Enter Time (In years): ";
    cin>> time;
    cout<< "Enter rate of interest: ";
    cin>> rate;
    //compute simple interest and display the results;
    SimpInt = (principle * time * rate) / 100;
    cout << "Simple Interest = ";
    cout<< SimpInt;
    // total amount = principle amount + simple interest
    total = principle + SimpInt ;   
    cout << "\n Total Amount = ";
    cout<< total;

}