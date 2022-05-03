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
        cout<<"Enter number of records ";
        cin>>num;
        employee **ptr_array_to_ptrs = new employee *[num];
        for(i=0;i<num;i++)
        {
            ptr_to_record = new employee;
            cout<<endl<<"Enter a record ";
            cin>>ptr_to_record -> name >>ptr_to_record ->age>>ptr_to_record->sal;
            ptr_array_to_ptrs[i]=ptr_to_record; 
        }

        cout<<"You entered the following records"<<endl;

        for(i=0;i<num;i++)
        {
            ptr_to_record = ptr_array_to_ptrs[i];
            cout<<endl<<ptr_to_record-> name<<'\t'<<ptr_to_record->age<<'\t'<<ptr_to_record->sal;
        }

        qsort (ptr_array_to_ptrs,num,sizeof(ptr_array_to_ptrs[0]),sort_func);

        cout<<endl<<"The sorted records are "<<endl;

        for(i=0;i<num;i++)
        {
         ptr_to_record = ptr_array_to_ptrs[i];
         cout<<endl<<ptr_to_record->name<<'\t'<<ptr_to_record->age<<'\t'<<ptr_to_record->sal;
        }
        
        for(i=0;i<num;i++)
        
            delete ptr_array_to_ptrs[i];
            delete [] ptr_array_to_ptrs;
            return 0;
        }

        int sort_func (const void *a,const void *b)
        {
            employee *aa,*bb;
            aa = *((employee **)a);
            bb = *((employee **)b);
            return (strcmp(aa->name,bb->name));
        }

    