#include <iostream>
using namespace std;

void printPattern(int n)
{

    if (n > 1)
    {
        printPattern(n - 1);
    }

    cout << "* ";
}

int main()
{

    int n;
    cout << "Please enter the number: ";
    cin >> n;

    printPattern(n);
    return 0;
}