#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"function with 3 arguments"<<endl;
    return a+b+c;
}
// volume of cylinder
int vol(int r, int h){
    return 3.14* r*r*h;
}
// volume of cube
int vol(int a){
    return a*a*a;
}
// volume of rectangular box
int vol(int l,int b, int h){
    return l*b*h;
}
int main(){
 cout<< "The  sum of 1 and 8 is "<<sum(1,9)<<endl;
 cout<< "The  sum of 1,7 and 8 is "<<sum(1,7,9)<<endl;
 cout<< "The  volume of cylainder is 7 and 8 is "<<vol(7,9)<<endl;
 cout<< "The  volume of cuboid  is "<<vol(9)<<endl;
 cout<< "The  volume of rectangular box is 7 and 8 is "<<vol(7,9,4)<<endl;
   return 0;
} 