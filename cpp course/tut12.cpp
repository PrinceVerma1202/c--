#include<iostream>
using namespace std;

int main(){
int a= 4;
int * b = &a;
 
// & address of operator
 cout<<"The address of a is "<<&a<<endl;
 cout<<"The address of a is "<<b<<endl;
// * value at  operator

 cout<<"The value of a is "<<*b<<endl;

 int **c= &b;
 cout<<"The address of b is "<<&b<<endl;
 cout<<"The address of b is "<<c<<endl;
 cout<<"The address of b is "<<*c<<endl;
 cout<<"The address of b is "<<**c<<endl;

   return 0;
}