 #include<iostream>
 using namespace std;

 class sample
 {
     private :

        static int count;

    public :

        sample ()
        {
            count ++;
        }

    static void showcount()
    {
        cout<<endl<<"count = "<<count;
    }
 };

 int sample::count = 0;

 int main()
 {
     sample s1;
     sample::showcount();
     sample s2;
     sample::showcount();
     sample s3;
     sample::showcount();
     return 0;
 }