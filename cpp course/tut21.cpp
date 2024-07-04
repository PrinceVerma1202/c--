// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
using namespace std;
class home
{
private:
    char x, y, z;

public:
    char e, f;

    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "your favrate person is " << x << endl;
        cout << "your favrate person is " << y << endl;
        cout << "your favrate person is " << z << endl;
        cout << "your favrate person is " << e << endl;
        cout << "your favrate person is " << f << endl;
    }
};

void home ::setdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // declaration
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{

    // employee prince;
    // // prince.a=23;--> This will thourgh error as a is private
    // prince.d = 23;
    // prince.e = 94;
    // prince.setdata(1, 2, 3);
    // prince.getdata();

    // home work
    home fav;
    fav.e = 'r';
    fav.f = 's';
    fav.setdata('q', 'u', 'p');
    fav.getdata();

    return 0;
}