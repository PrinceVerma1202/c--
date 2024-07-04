#include<iostream>
using namespace std;
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a* factorial(a-1); 
}

int fibo(int a)
{
     if(a<2){
        return 1;
    }
    return fibo(a-1) +fibo (a-2); 
}
int main(){
int a;
cout<<"ENter the value of a"<<endl;
cin>>a;

// cout<<"The Factorial  of "<<a<<" is " <<factorial(a)<<endl;
cout<<"The Fibonachi sequance  of "<<a<<" is " <<fibo(a)<<endl;
   return 0;
}