#include<iostream>
#include<windows.h>
using namespace std;

void box(int sr = 1, int sc = 1, int er = 24, int ec = 80);
void gotoxy(short,short);

int main()
{
    system ("cls");
    box(10,20,22,70);
    box(10,20,15);
    box(5,10);
    box();
    return 0;
}

void box( int sr, int sc , int er, int ec)
{
    int r,c;

    gotoxy(sc,sr);
    cout<<(char)218;

    gotoxy(sc,sr);
    cout<<(char)191;
    gotoxy (ec,sr);
    cout<<(char)192;
    gotoxy (ec,er);
    cout<<(char)217;

    for(r=sr+1;r<er;r++)
    {
        gotoxy(sr,r);
        cout<<(char)179;
        gotoxy(er,r);
        cout<<(char)179;
    }

    for(c=sc+1;c<ec;c++)
    {
        gotoxy(c,sr);
        cout<<(char)196;
        gotoxy(c,er);
        cout<<(char)196;
    }
}
void gotoxy(short col,short row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position {col,row};
    SetConsoleCursorPosition(h,position);
}