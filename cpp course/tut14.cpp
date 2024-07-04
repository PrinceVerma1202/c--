#include<iostream>
using namespace std;
typedef struct employee{
int eid;
char fchar;
float salary;
}se;


union  money
{
    int rice;
char car;
float pound;
};



int main(){
enum meal {breakfast, lunch, dinner};
    meal m1 = lunch;
  cout<<(m1==2)<<endl;
  cout<<breakfast<<endl;
  cout<<lunch<<endl;
  cout<<dinner<<endl;
//  union  money m1;

//  m1.rice=12;
//  m1.car= 'c';
//  cout<<m1.car<<endl;
 
// se prince;
// struct employee prince;
// prince.eid = 01;
// prince.fchar= 'P';
// prince.salary = 10000000000000;


// cout<<"The value at"<<prince.eid<<endl;
// cout<<"The value at"<<prince.fchar<<endl;
// cout<<"The value at"<<prince.salary<<endl;

   return 0;
}