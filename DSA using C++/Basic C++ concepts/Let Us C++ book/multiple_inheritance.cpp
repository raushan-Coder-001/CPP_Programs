 #include<iostream>
 using namespace std;

 class item
 {
     private :

        char title[20];
        float price;

    public :

        void getdata()
        {
            cout<<endl<<"Enter title and price";
            cin>>title>>price;
        }

        void displaydata()
        {
            cout<<endl<<"Title and price "cout<<title<<"\t"<<price;
        }
 };

 class sales
 {
     private :  

        float salesfig[3];

    public :
        
        void getdata()
        {
            cout<<endl<<"Enter sales figure for 3 months ";
            for(int i =0;i<3;i++)
            {
                cin>>salesfig[i];
            }
        }

        void displaydata()
        {
            cout<<endl<<"Sales figures for 3 months ";
            for(int i=0 i<3;i++)
                cout<<endl<<salesfig[i]<<"\t";
        }
 };

 class hwitem : private item, private sales
 {
     private :  

        char category[10];
        char oem[10];
    
    public :

        void getdata()
        {
            item::getdata();
            cout<<endl<<"Enter category and oem";
            cin>>category>>oem;
            sales::getdata();
        }

        void displaydata()
        {
            item::displaydata();
            cout<<endl<<"Category and oem "<<cout<<category<<"\t"<<oem;
            sales::getdata();
        }
 };

 class switem : private item, private sales{
     private :

        char catogery[10];
        char os[10];

    public :

        void getdata()
        {
            item::getdata();
            cout<<endl<<"Enter category and os ";
            cin>>catogery>>os;
            sales::getdata();
        }

        void displaydata()
        {
            item::displaydata();
            cout<<endl<<"Category and os ";
            cout<<category<<"\t"<<os;
            sales::displaydata();
        }
 };
 int main()
 {
     hwitem h1,h2;

     h1.getdata();
     h1.displaydata();
     h2.getdata();
     h2.displaydata();

     switem s1,s2;

     s1.getdata();
     s1.displaydata();
     s2.getdata();
     s2.displaydata();
     return 0;
 }

 //Don't know why error
 