#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 125;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getdata(void)
    {
        cout << "The id of this employee is" << id << endl;
        // cout << "The id of this employee is" << salary << endl;
    }
};

int main()
{

    // employee haryy,raj;

    // raj.setdata();
    // raj.getdata();

    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}