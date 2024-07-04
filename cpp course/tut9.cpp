#include <iostream>
using namespace std;

int main()
{
    // int age;

    // cout<<"Enter your age"<<endl;
    // cin>>age;

    // if(age==16 ||age==17){
    //      cout<<"You got learning licence";
    // }else if ((age<18)){
    //     cout<<"You cannot drive";
    // }
    // else{
    //     cout<<"You can drive";
    // }

    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You can come to the party";
        break;
    case 16:
        cout << "You can come to the party with kid pass";
        break;
    case 24:
        cout << "You can come to the party most wellcome";
        break;

    default:
        cout << "Invalid entry";
        break;
    }

    return 0;
}