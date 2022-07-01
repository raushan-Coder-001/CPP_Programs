struct sample
{
    void fun()
    {
        //some code
    }

    private :

    int  data; 
};

/* we can use structures in almost exactly the same way that we can use classes. The only formal difference between a class
and a structure is that in a class the member are private by default, while in a structure they are public by default.*/

/* In a structure all members are by default public. Still here we can't afford to drop the keyword public. On doing so the
private clause would become applicable even to the function fun(). If we are still keen on dropping the keyword public 
we will have to define the function before the data members shown above.*/