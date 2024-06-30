//1.This is a system header file
#include<iostream>

//2. this is a user define header file which is writen by programmer
//#include<"this.h" --> this will through an error;
using namespace std;

int main(){
int a=3, b= 6;

//Types of variables 

// arithematic variables 

cout<< "The value of a+b is "<<a+b<<endl;
cout<< "The value of a-b is "<<a-b<<endl;
cout<< "The value of a/b is "<<a/b<<endl;
cout<< "The value of a*b is "<<a*b<<endl;
cout<< "The value of a%b is "<<a%b<<endl;
cout<< "The value of a++ is "<<a++<<endl;
cout<< "The value of a-- is "<<a--<<endl;
cout<< "The value of ++a is "<<++a<<endl;
cout<< "The value of --a is "<<--a<<endl;


// asignment operators

// int c=3; d=3;
// char ch = 's';

// comparesion operators 
cout<< "The value of (a==b) is "<<(a==b)<<endl;
cout<< "The value of (a!=b) is "<<(a!=b)<<endl;
cout<< "The value of (a<=b) is "<<(a<=b)<<endl;
cout<< "The value of (a>=b) is "<<(a>=b)<<endl;
cout<< "The value of (a>b) is "<<(a>b)<<endl;
cout<< "The value of (a<b) is "<<(a<b)<<endl;


// logical operators 

cout<< "The value of (a==b) && (a<=b)is "<<((a==b) && (a<=b))<<endl;
cout<< "The value of (a==b) || (a<=b)is "<<((a==b) || (a<=b))<<endl;
cout<< "The value of !(a<=b)is "<<( !(a>=b))<<endl;


   return 0;
}