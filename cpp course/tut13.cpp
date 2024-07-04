#include<iostream>
using namespace std;

int main(){
int arr[]={23,44,25,42,54};

int i=0;
// while (i<arr[i])
// {
//    cout<<"The marks of "<<i<<" is "<<arr[i]<<endl;
//    i++;
// }

// do{
//     cout<<"The marks of "<<i<<" is "<<arr[i]<<endl;
//    i++;
// }while(i<arr[i]);

//    return 0;

for (int i = 0; i < 5; i++)
{
    cout<<"The marks of "<<i<<" is "<<arr[i]<<endl;
       
}

int *p = arr;
    cout<<"The marks of p is "<<*p<<endl;
    cout<<"The marks of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The marks of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The marks of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The marks of *(p+4) is "<<*(p+4)<<endl;

}