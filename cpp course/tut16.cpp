#include<iostream>
using namespace std;
int  swap(int a, int b){
    int temp = a;
    a= b;
    b= temp;
}
// call by referance in c++ using pointers
int  swapPointers(int * a, int * b){
    int temp = *a;
    *a= *b;
    *b= temp;
}
// call by referance in c++ using referance variables
// int & 
void swapReferance(int & a, int & b){
    int temp = a;
    a= b;
    b= temp;
    // return a;
}
int main(){
int a = 5, b= 6;

cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
// swap(a,b); // this will not swap the values
//  swapPointers(&a,&b); // this will swap the values
 swapReferance(a,b) ; // this will swap the values
//  swapReferance(a,b) = 2093; // this will swap the values
cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

   return 0;
}