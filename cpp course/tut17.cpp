#include<iostream>
using namespace std;

// inline int product(int a, int b ){
//    return a*b;
// }

float moneyRecived(int currentmoney, float factor = 1.08){
    return currentmoney*factor;
}
// int strlen(const char *p){
// }
int main(){


int money = 100000;

cout<<"If you have "<<money<<"Rs in your account you will receive "<<moneyRecived(money)<<"rs after 1 year"<<endl;
cout<<"for vip: If you have "<<money<<"Rs in your account you will receive "<<moneyRecived(money, 1.1)<<"rs after 1 year"<<endl;





// int a =12, b=18;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
// cout <<"The product of a and b is "<<product(a,b)<<endl;
   return 0;
}