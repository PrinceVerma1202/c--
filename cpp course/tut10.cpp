#include<iostream>
using namespace std;

int main(){
// Types of loop in c++

//For loop;
int n;
cin>>n;
// for(int i=0; i<=n; i++){

    // cout<<i<<endl;
// }
// while (i<=n)
// {
//     cout<<i<<endl;
//     i++;
// }
int i=1;

// do{
//     cout<<i<<endl;
//     i++;
// }while(false); 


do{
    cout<<i*6<<endl;
    i++;
}while(i<=n); 

   return 0;
}