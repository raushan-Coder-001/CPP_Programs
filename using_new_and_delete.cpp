    #include <iostream>
    #include <string.h>
    using namespace std;

    struct employee
    {
        char name[20];
        int age; 
        float sal;
    };

    int sort_func(const void *a,const void *b);

    int main()
    {
        int num,i;
        employee *ptr_to_record;
        cout<<"Enter number of records";
        cin>>num;
        employee **ptr_array_to_ptrs = new employee *[num];
        for(i=0;i<num;i++)
        {
            ptr_to_record = new employee;
            cout<<endl<<"Enter a record";
            cin>>ptr_to_record -> name;
        }
    }