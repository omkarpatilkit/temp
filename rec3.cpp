#include <iostream>
using namespace std;

void sumOfDigits(int n)
{
    static int sum = 0;
    int iDigits;
    if (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
        sumOfDigits(n);
    }
    else
    {
        cout << sum;
    }
}

int main()
{

    int n;
    cout << "Please enter the number: ";
    cin >> n;

    sumOfDigits(n);

    return 0;
}