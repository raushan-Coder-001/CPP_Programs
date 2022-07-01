 //maximum of four intergers

 #include<iostream>
 using namespace std;

 int maxoffour(int a,int b,int c,int d)
 {
    if(a>b&&a>c&&a>d)
    {
        return a;
    }
    else if (b>a&&b>c&&b>d)
    {
        return b;
    }
    else if (c>a&&c>b&&c>d)
    {
        return c;
    }
    else if (d>a&&d>b&&d>c)
    {
        return d;
    }
    else{
        cout<<"All are equal.";
    }
 }


 int main()
 {
    int a,b,c,d;
    cout<<"Enter four intergers for finding the maximum of them: "<<endl;
    cin>>a>>b>>c>>d;
    int maxi = maxoffour(a,b,c,d);
    cout<<maxi;
    return 0;
 }