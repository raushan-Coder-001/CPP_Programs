#include <cctype>
#include <string>
#include <cstdlib>
#include<windows.h>
using namespace std;

void newprintf(int,int,long,char*);
void newprintf(int,int,double,char*);
void newprintf(int,int,char*,char*);
void writechar(char,int,int);
void gotoxy(short,short);

int main()
{
    int i=22,j=22222;
    long int l=777777;
    float f=0.77777f;
    double d=7777.5678;
    static char str[30] = "John O Hara! O Hara!!";

    system ("cls");
    newprintf(14,30,(long)i,"9,999");
    newprintf(15,30,(long)j,"9,999");
    newprintf(16,30,l,"99,99,999");
    newprintf(17,30,(double)f,"nn,nnn.nn");
    newprintf(18,30,d,"nn,nn,nnn.nnn");
    newprintf(19,30,str,"!!!!!!!!!!!!!!!!!");
    return 0;

}

//long version
void newprintf(int r,int c,long val,char *format)
{
    char *p,str[20];
    int len,i,j,lstr;

    len = strlen (format);

    _ltoa (val,str,10);
    lstr = strlen (str);
    p= str;
    c += len;
    p = str + lstr -1;
    format = format + len -1;

    for(i = 0;i<lstr;i++)
    {
        if(isdigit(*p))
        {
            if(*format == ',')
            {
                writechar(',',r,c);
                c--;
                format--;
            }
            writechar(*p,r,c);
            c--;
            format--;
            p--;
        }
    }
}

//double version
void newprintf(int r,int c,double val,char *format)
{
    char *p,str[20];
    int len,i,j,lstr,dec=0;

    len = strlen(format);
    c+=len;
    i=0;
    j=0;
    while(*format != '\0')
    {
        if(*format=='.')
        dec = 1;
        else
        {
            if(*format =='n')
            {
                i++;
                if(dec ==1)
                j++;
            }
        }
        format ++;
    }

    _gcvt(val,i,str);

    p = str;
    lstr = strlen(str);
    p = str + lstr - 1;

    for(i=0;i<lstr;i++)
    {
        if(*format==',')
        {
            writechar(',',r,c);
            c--;
            format --;
        }
        writechar(*p,r,c);
        c--;
        format--;
        p--;
    }
}

//string version
void newprintf(int r,int c,char *val,char *format)
{
    int i,lstr;
    lstr=strlen(format);

    for(i=0;i<lstr;i++,format++,val++)
    {
        if(*format == '!')
        *val = toupper(*val);
        else
        {
            if(*format != 'x' && *format !='a')
            *val = *format;

        }
        writechar(*val,r,c+i);
    }
}

void writechar (char ch,int r,int c)
{
    gotoxy(c,r);
    putchar(ch);
}
void gotoxy (short col,short row)
{
    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
    COORD positon = {col,row};
    SetConsoleCursorPosition (h,positon);
}



/* Let us now understand the working of the newprintf() function.In each of the overloaded functions firstly the 
entity to be printed is converted to  an ascii string using funcions like _ltoa() (in case of a long int) and 
_gcvt() (in case of a double). (In the string version passed to it is itself a string.)This string is then compared with 
the format string passed to newprintf() on a character by character basis from right to left. If a number is being
prited then,on encountering a comma in the format string the comma is prined as it is, whereas, on encountering a '9' a
corresponding digit from the numeric string is printed. On similar lines,while printing  a string if '!' is encouunered then the
corresponding character in the string to be printed is converted to upper case. Note that all newprintf()s are intelligent enough 
to take into account the possibilities such as the format string specified being bigger than the length of the number/string
to be printed or vice versa. 

*/