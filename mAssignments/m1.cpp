#include <iostream>
using namespace std;

class printNumber
{
public:
    printNumber() { cout << "Constructor called.\n"; }

    void printUpto(int num)
    {
        for (int i = 1; i <= num; i++)
        {
            cout << i * 2 << "\t";
        }
        cout << "\n";
    }
};

int main()
{
    int n;
    cout << "Please enter the number: \n";

    cin >> n;
    printNumber p;
    p.printUpto(n);

    return 0;
}