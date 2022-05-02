//The following program implements such a form of addition, subtraction and multiplication.

    #include<iostream>
    #include<iomanip>
    using namespace std;

    const int MAXROW =  3,MAXCOL =3;
    struct matrix 
    {
        int arr [MAXROW][MAXCOL];
    };

    matrix operator + (matrix a, matrix b);
    matrix operator - (matrix a, matrix b);
    matrix operator * (matrix a, matrix b);
    void mat_print (matrix p);

    int main()
    {
        matrix a={
            1,2,3,
            4,5,6,
            7,8,9
        };

        matrix b={
            1,2,3,
            4,5,6,
            7,8,9
        };

        matrix c,d,e,f;

        c= a+b;
        d=a*b;
        e=a+b*c;
        f=a-b*c+d;

        mat_print(c);
        mat_print(d);
        mat_print(e);
        mat_print(f);
        return 0;
    }

    matrix operator + (matrix a,matrix b)
    {
        matrix c;
        int i,j;

        for(i=0;i<MAXROW;i++)
        {
            for(j=0;j<MAXCOL;j++)
            c.arr[i][j] = a.arr[i][j] + b .arr[i][j];
        }
        return c;
    }

    matrix operator - (matrix a,matrix b)
    {
        matrix c;
        int i,j;

        for(i=0;i<MAXROW;i++)
        {
            for(j=0;j<MAXCOL;j++)
            c.arr[i][j] = a.arr[i][j] - b.arr[i][j];
        }
        return c;
    }

    matrix operator * (matrix a,matrix b)
    {
        matrix c;

        for(int i=0;i<MAXROW;i++)
        {
            for (int j=0;j<MAXCOL;j++)
            c.arr[i][j] = a.arr[i][j] * b.arr[i][j];
        }
        return c;

        int i,j,k;

        for(i=0;i<MAXROW;i++)
        {
            for(j=0;j<MAXCOL;j++)
            {
                c.arr[i][j] = 0;
                for(k=0;k<MAXCOL;k++)
                c.arr[i][j] += a.arr[i][j];
            }
        }
        return c;
    }

    void mat_print (matrix p)
    {
        int i,j;
        cout<<endl<<endl;
        for(i=0;i<MAXROW;i++)
        {
            cout<<endl;
            for(j=0;j<MAXCOL;j++)
                cout<<setw(5)<<p.arr[i][j];
                /* 
                Here setw() is a manipulator. It is being used to line up the numbers in each column 
                properly one below the other. It causes the number that follows it in the output
                stream to be printed within 3 columns, right aligned. To use setw() it is necessary to include the file 
                #include <iomanip.h>

                If we desire we can display each element of matrix left alligned within 3 columns that are reserved for it using
                setw().
                Here is how it can be archieved.

                cout<<setw(3)<<setiosflags(ios::left)<<p.arr[i][j];

                we could also obtain the same effect by exchanging positions of setw() and setiosflags() as shown below:
                cout<<setiosflags()(ios::left)<<setw(3)<<p.arr[i][j];
                */
        }
    }


