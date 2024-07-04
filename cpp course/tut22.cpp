#include <iostream>
using namespace std;
class binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void Ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}

void binary ::Ones_complement(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }

    
    }
}

void binary ::display(void)
{
    cout << "Display your  binary number " << endl;

    for (size_t i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary n;
    n.read();
    // n.check_binary();
    n.display();
    n.Ones_complement();
    n.display();

    return 0;
}