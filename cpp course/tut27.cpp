#include <iostream>
using namespace std;
// forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumrcompcomplex(complex, complex);
};
class complex
{
    int a;
    int b;
    //individually declaring fuction as a friend
    // friend int calculator::sumrealcomplex(complex, complex);
    // friend int calculator::sumrcompcomplex(complex, complex);

    // Aliter: declaring entire calculator class as a friend

    friend class calculator;

public:
    void setno(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printno()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};
int calculator::sumrcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};
int main()
{

    complex o1,o2;
    o1.setno(12,23);
    o2.setno(8,9);
    calculator clac;
   int res = clac.sumrealcomplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
   int resc = clac.sumrcompcomplex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;
    return 0;
}