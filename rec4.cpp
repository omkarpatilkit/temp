#include <iostream>
using namespace std;

void countLetters(char arr[])
{
    static int Len = 0; //
    if (*arr != '\0')
    {

        Len++;
        arr++;
        countLetters(arr);
    }
    else
    {
        cout << Len;
    }
}
int main()
{
    char arr[20];
    cout << "Please enter a name: ";
    cin >> arr;

    countLetters(arr);

    return 0;
}
