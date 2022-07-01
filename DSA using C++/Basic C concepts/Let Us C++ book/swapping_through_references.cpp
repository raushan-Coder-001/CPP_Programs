/* What is the advantage of referencing ?
    -> Referencing goes a long way in erasing untidiness in code, making it more readable, as the long following program would justify.
    */

   #include<iostream>
   using namespace std;
   //prototype declarations
   void swapv(int,int);
   void swapr(int & , int &);
   void swapa(int * ,int *);

   int main()
   {
       int a=10,b=20;

       swapv(a,b); //Call by value
       cout<<endl<<a<<"\t"<< b;

       swapa(&a,&b); //call by address
       cout<<endl<<a<<"\t"<< b;

       swapr(a,b); //call by reference
       cout<<endl<< a <<"\t"<<b<<endl;
       return 0;
   }

    void swapv(int i,int j)
    {
        int t;

        t=i;
        i=j;
        j=t;
        cout<<i<<"\t"<<j;
    }

    void swapa(int *i,int *j)
    {
        int t;

        t= *i;
        *i=*j;
        *j=t;
    }

    void swapr(int &i,int &j)
    {
        int t;

        t= i;
        i=j;
        j=t;
    }