 #include<iostream>
 using namespace std;

//macro defination
#define LIMIT 30
#define AREA(l, b) (l * b)
#define DATE 5
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 4.5

// Multi-line macro defination
#define ELE 1, \
            2, \
            3

// Function like macro defination 
#define min(a,b) (((a) < (b)) ? (a) : (b))

#define PI 3.1416

int main() {
    cout << "Raushan has no limit but he can easily do " << LIMIT << " pushups. " << endl;

    float your_ego, your_arrogance;
    cout << "Enter your ego and arrogance --> ";
    cin >> your_ego >> your_arrogance;
    cout << "\n";
    cout << "Area of his attitue is not big but " << AREA(your_ego, your_arrogance) << endl;

    cout << "I talked to my gf first time on " << DATE << "-02-2019 at 11:47 am." << endl;
    cout << "I have not more but " << FOLLOWERS << "k followers on Instagram." << endl;
    cout << "I give someone these amount of chance ";
    int arr[3] = {ELE};
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int M = 10000007; // pow(10, 7) + 7
    int my_attitude = M;
    cout << "Which is minimum my_attitude or your ego --> " << min(your_ego, my_attitude) << endl;
    cout << "Thanks piece out.";
    return 0;
}

