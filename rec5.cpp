#include <iostream>
using namespace std;

void Facto(int n)
{

    static int multi = 1;

    if (n > 0)
    {

        multi = multi * n;
        Facto(n - 1);
    }
    else
    {
        cout << multi;
    }
}

int main()
{

    int n;
    cout << "Please enter the number: ";
    cin >> n;

    Facto(n);
    return 0;
}