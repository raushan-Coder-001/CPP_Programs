//The following program shows how to convert between a basic type and a user-defined type and vice-versa.
  
  #include<iostream>
  #include<cstdlib>
  #include<string.h>
  
  using namespace std;
  class mystring
  {
      private :

        char str[20];
        public :

        mystring()
        {
            str[0] = '\0';
        }

        mystring(char *s)
        {
            strcpy(str,s);
        }

        mystring(int a)
        {
            itoa (a,str,10);
        }

        operator int ()
        {
            int i = 0;I,ss=0,k=1;

            I = strlen(str) - 1;
            while(I >= 0)
            {
                ss = ss + (str[I] - 48) * k;
                I--;
                k*= 10;
            }

            return (ss);
        }

        void displaydata()
        {
            cout<<str;
        }
  };

  int main()
  {
      mystring s1 = 123;
      cout<<endl<<"s1 = ";
      s1.displaydata();

      s1 = 150;
      cout<<endl<<"s1 = ";
      s1.displaydata();

      mystring s2 ("123");
      int i = int (s2);
      cout<<endl<<"i = "<<i;

      mystring s3 ("456");
      i = s3;
      cout<<endl<<"i = "<<i<<endl;
      return 0;
  }