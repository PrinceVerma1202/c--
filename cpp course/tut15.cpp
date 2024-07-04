#include<iostream>
using namespace std;
//Function prototyping 

//type function-name (argumrnt)

// int sum (int a, int b); // Acceptable
// int sum (int a,  b); // Not Acceptable
int sum (int , int); // Acceptable
// void g(void); // Acceptable
void g(); // Acceptable
int main(){
  int num1=4, num2 = 90;
// num1 and num2 are Actual arguments
  cout<<"THe sum is "<<sum(num1, num2);
  g();
   return 0;
}
//a and b are Formal arguments which takes value from Actual arguments
int sum(int a, int b){
    int c= a+b;
    return c;

}

void g(){
    cout<<"\nHello Good Morning"<<endl;
}