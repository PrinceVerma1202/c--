#include<iostream>
using namespace std;
class employee{
private:
int id;
static int count;

public:
 void setdata(void){
    cout<<"Enter the id ";
    cin>>id;
    count++;
 }
static void getcount(void){
    cout<<"The value of count is"<<count<<endl;
}
 void getdata(void){
    cout<<"The id of this employee is"<<id<<"and this is employee no"<<count<<endl;
 }
};
int employee :: count;
int main(){

employee harry, rohan, raju;

harry.setdata();
harry.getdata();
employee::getcount();

rohan.setdata();
rohan.getdata();
employee::getcount();


raju.setdata();
raju.getdata();
employee::getcount();


   return 0;
}