#include<iostream>
using namespace std;
class shop{
 int itemid[100];
 int itemprize[100];
 int counter;

 public:
 void initConter(void) {counter=0;}
 void setPrize(void);
 void getPrize(void);
};

void shop :: setPrize(void){
    cout<<"Enter id of your item"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter prize of your item"<<endl;
    cin>>itemprize[counter];
    counter++;
}

void shop :: getPrize(){
for (int i = 0; i < counter; i++)
{
    cout<<"the prize of your item with id no. "<<itemid[i]<<" is "<<itemprize[i]<<endl;
}

}
int main(){
shop dukaam;
dukaam.initConter();
dukaam.setPrize();
dukaam.setPrize();
dukaam.setPrize();
dukaam.getPrize();
   return 0;
}