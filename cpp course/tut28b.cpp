// #include <iostream>
// using namespace std;
// class c2;
// class c1
// {

//     int val1;
//     friend void exchange(c1 &, c2 &);

// public:
//     void indata(int a)
//     {
//         val1= a;
//     }

//     void printdata(void)
//     {
//         cout << val1<< endl;
//     }
// };
// class c2
// {
//     int val2;
//     friend void exchange(c1 &, c2 &);

// public:
//     void indata(int b)
//     {
//         val2 = b;
//     }

//     void printdata(void)
//     {
//         cout << val2 << endl;
//     }
// };

// void exhange(c1 &x, c2 &y)
// {

//     int temp = x.val1;
//     x.val1= y.val2;
//     y.val2 = temp;
// }


// int main()
// {
// c1 oc1;
// c2 oc2;

// oc1.indata(23);
// oc2.indata(36);
// exchange(oc1,oc2);

// cout<<"the value of c1 after exchanging val2ecomes";
// oc1.printdata();
// cout<<"the value of c2 after exchanging val2ecomes";
// oc2.printdata();

//     return 0;
// }

#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}
