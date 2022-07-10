/*
    Let us rietrate a few facts that we have learnt about inheritance by now:-
        a) A derived class inherits all the capabilities of the base class, but can add new features of its own.
            By making these additions these additions the base class remains unchanged.
        b) protected members behaves just like private members until a new class is derived from the base class that 
            has protected members.
        c) If a base class has private members, those members are not accessible to the derived class. protected 
            members are public to derived classes but private to the rest of the program.
        d) A derived class can specify that a base class is public, or private by using the following notation in the 
            declaration of the derived classes:

                class c : public b
                class a : private b

                The public access specifier means that the protected members of the base class are protected members of the 
                derived class and public members of the base class are public members of the derived class. The private
                access specifier means that the protected and public members of the base class are private members of
                the derived class. Default access specifier is private.
        e) When you define an object of a derived class, the compiler executes the constructor function of the base
            followed by the constructor function of the derived class. The parameters list for the derived calss's constructor
            function may be differnt from  that of the base class's constructor function. Therefore, the constructor function for
            the derived class must tell the compiler what values to use as arguments to the constructor function for the base class.
        f) When a base class and a derived class have public member functions with the same name and parameter list types,
            the function in the derrived class gets a priority when the function is called as a member of the derived class
            object.
        g) A program can declare objects of both the base and derived classes. The two objects are independent of one 
            another.
 The following program should further clarify the accessibility of data members and member functions of base class
 form derived class member functions from objects of derived class.
 */

 class one // base class
 {
     private :
        int a;

    protected : 
        int b;

    public :
        int c;
 };

 class two : public one // publicly-derived class
 {
     public :

        void function1()
        {
            int z;

            //z = a; //error: not accessible
            z = b; //works
            z = c; //works
        }
 };

 class three : private one //privately-derived class
 {
     public :

        void function2()
        {
            int y;

           // y = a; //error: not accessible
            y = b; //works
            y = c; // works
        }
 };

 int main()
 {
     int x;
     two second; //object of class two
   //  x = second.a; //error: not accessible
    // x = second.b; //error: not accessible
     x = second.c; //works

     three third; //object of class three
   /*  x = three.a; //error:not accessible
     x = three.b; //error:not accessible
     x = three.c; //error:not accessible */
     return 0;
 }