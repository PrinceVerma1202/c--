#include<iostream>
using namespace std;
int glo= 6;

void sum(){
    cout<<glo;
}
int main(){
// variables locla and globle scope
// local scope has more presidence than globle
// we can make two variables of same name but one should in local and another should be in globle scope
int glo = 9;
 glo = 93;
int c=4,f=5;
cout<<c<<endl;
cout<<f<<endl;
cout<<glo<<endl;
sum();
   return 0;
}