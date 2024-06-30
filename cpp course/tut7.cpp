#include<iostream>
using namespace std;
// int c = 45;
int main(){

    // *****************Built in datatypes*************************
// int a,b;
// int c= 9;
// cout<<"Enter the value of num1 :"<<endl; //<< this is called a insertion operater
// cin>>a;                                    //>> this is called a Extraction operater
// cout<<"Enter the value of num2 :"<<endl;
// cin>>b;
// cout<<"the sum is :";
// cout<<a+b<<endl;
// cout<<"Local c ic"<<c<<endl;
// cout<<"Globel c is "<<::c<<endl;
    // *****************Long double, double Literals datatypes*************************

// float d= 34.45;
// long double e = 34.52;

// cout<<d<<endl;
// cout<<e<<endl;

// cout<<" size of  34.4  is " <<sizeof(34.4)<<endl;
// cout<<" size of  34.4F  is " <<sizeof(34.4F)<<endl;
// cout<<" size of  34.4f  is " <<sizeof(34.4f)<<endl;
// cout<<" size of  34.4L  is " <<sizeof(34.4L)<<endl;
// cout<<" size of  34.4l  is " <<sizeof(34.4l)<<endl;

    // *****************referance variables*************************
//   int x = 6;
//   int &y =x;

//   cout<<x<<endl;
//   cout<<y<<endl;

    // *****************Typecasting*************************

    int a = 45;
    float b = 45.55;

    cout<<"The value of a is " << (float)a<<endl;
    cout<<"The value of a is " << float(a)<<endl;
    cout<<"The value of b is " << (int)b<<endl;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;



   return 0;
}