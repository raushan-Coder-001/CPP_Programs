 #include<iostream>
 using namespace std;

 class circle
 {
     private :

        int radius;
        float x,y;

    public :

        circle()
        {
        }
        
        circle (int rr,float xx, float yy)
        {
            radius = rr;
            x = xx;
            y = yy;
        }

        circle operator = (circle& c)
            {
                cout<<endl<<"Assignment operator invoked";
                radius = c.radius;
                x=c.x;
                y=c.y;
                return circle(radius,x,y);
            }

            circle(circle& c)
            {
                cout<<endl<<"Copy constructor invoked";
                radius = c.radius;
                x = c.x;
                y = c.y;
            }

            void showdata()
            {
                cout<<endl<<endl<<"Radius = "<<radius;
                cout<<endl<<endl<<"X-Coordinate = "<<x;
                cout<<endl<<endl<<"Y-Coordinate = "<<y<<endl;
            }
 };

 int main()
 {
     circle c1(10,2.5,2.5);
     circle c2,c4;
     c4=c2=c1;
     circle c3 = c1;

     c1.showdata();
     c2.showdata();
     c3.showdata();
     c4.showdata();
     return 0;
 }