#include <iostream>
using namespace std;

void printPattern(int n)
{
    static int i = 0;
    if (i < n)
    {
        i++;
        cout << i << " ";
        printPattern(n);
    }
}

int main()
{

    int n;
    cout << "Please enter the number: ";
    cin >> n;

    printPattern(n);

    return 0;
}