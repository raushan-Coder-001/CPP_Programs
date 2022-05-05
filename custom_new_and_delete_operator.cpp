#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;

/*void memwarning();
void *operator new (size_t,int);
void operator delete(void *);

int main()
{
    char *p = new ('$') char[100];
    cout<<endl<<"First allocation: p = "<<hex<<long(p)<<endl;
    for(int i=0;i<100;i++)
    {
        cout<<p[i];
    }
        cout<<endl;

        p = new ('*') char[64000u];
        delete p;
        return 0;
}

void memwarning()
{
    cout<<endl<<"Free store has now gone empty";
    exit (1);
}

void *operator new (size_t sz,int setvlaue)
{
    void *p;

    p = malloc (sz);
    if(p == NULL)
        memwarning();
        memset(p,setvlaue,sz);
        return (p);
}

void operator delete(void *pp)
{
    free (pp);
}
Once again the memory allocation would fail since we are demanding a huge chunk of memory.*/

//The correct way is to must once again use the set_new_handler() function as shown below.


void memwaring();
void *operator new (size_t,int);
void operator delete (void *);

int main()
{
    set_new_handler (memwaring);
    char *p = new ('$') char[100];
    cout<<endl<<"First allocation: p = "<<hex<<long(p)<<endl;
    for(int i=0;i<100;i++)
    cout<<p[i];

    cout<<endl;

    delete p;

    int *q = new int[64000u];

    p = new ('*') char [64000u];
    delete p;
    return 0;
}

void memwarning ()
{
    cout<<endl<<"Free store has now gone empty";
    exit(1);
}

void *operator new (size_t sz,int setvalue)
{
    void *p;

    p = malloc (sz);
    if (p == NULL)
        memwaring ();

    memset (p,setvalue,sz);
    return (p);
}
void operator delete (void **pp)
{
    free (pp);
}
//don't know what is error