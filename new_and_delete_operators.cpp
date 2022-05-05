#include<iostream>
using namespace std;
    int *p1;
    struct employee
    {
        char name[20];
        int age;
        float sal;
    }*p2;
    
int main()
{
    p1 = new int ; //allocates 4 bytes
    p2 = new employee ; //allocates 28 bytes

    int *p3;
    p3 = new int [30]; // allocates memory for storing 30 integers

    cout<<p1<<endl<<p2<<endl<<p3;

    delete p1;
    delete p2;
    delete []p3;
    return 0;

    /* In short, you would be better off if you use delete[] whenever you allocate memory using new[]. 
    Otherwise be prepare for disaster. */
}

/*
    There are some important points about delete and new these are as follows: - 
        a) In addition to allocation the memory new also create an object by calling the object's constructor.
        b) In addition to deallocating memory delete also destroys the object by calling the object's destructor.
        c) While allocating memory using new it is allocated from the heap. In c++ lexicon heap is known as a free storage.
        d)Memory allocated memory using new[] must be deallocated using delete[].If not done the best you can hope 
        for is disaster.
        e)
*/


/*
    Some more important concepts about new and delete :- 
    a) An object created using new exists until it is eplicitely destroyed using delete.
    b) The delete operator may be applied only to a pointer returned by new or to zero. Applying delete
       to 0 has no effect. In other words passing a NULL pointer to delete is safe and is guaranteed to do nothing.
       This simplifies the code to delete a pointer that may be NULL without being required to use a special if.
    c) The expression delete p doesn't delete the pointer. It deletes the object being pointed to by  p.
        So ideally the name of the keyword should have been deletethethingpointedtoby rather than delete.
    d) Parallel to realloc() function of C there is no renew operator in C++. Never use realloc() on user-defined objects.
         When realloc() needs to move data during the reallocation it does a bitwise copying which is disastrous for many 
         user-defined classes. C++ objects know how to copy themelves using the copy constructors and assignment operators.
    e) The new operator is better than malloc() on three counts: 
        - It creates an object,whereas, malloc() merealy allocates memory.
        - It is safe typecasted explicitly.
        - New can overloaded on a class-by-class basis, whereas, malloc() cannot be.
    f) Never delete a pointer twice. Suppose you have a pointer variable p. The first time you delete p, the object
        *p is safely destructed,and the memory pointed to by is safely returned to the heap. The second time you 
        pass the same pointer to delete the remaining of what used to be an object at *p are passed to the destructor
        (which could be disastrous), and the memory pointed to by p is handed back to the heap a second time. This may 
        corrupt the heap.
    g) Not deleting an object is not an error as far as the language is concerned. However, it is a bad practice.
        If the program is going to run for a long time then it is all the more important that we delete the object once its
        purpose is over.*/

*/