#include<iostream>
using namespace std;

int main(){
// for (size_t i = 0; i < 4; i++)
// {
//     cout<<i<<endl;
//     if(i==2)
//     break;
// }

for (size_t i = 0; i < 100; i++)
{
    if(i%2==1)
   continue;
    cout<<i<<endl;

}

   return 0;
}