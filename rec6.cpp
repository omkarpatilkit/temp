#include <iostream>
using namespace std;

int countWhitespace(char arr[])
{
    static int cnt = 0;
    if (*arr != '\0')
    {
        if (*arr == ' ')
        {
            cnt++;
        }
        arr++;
        countWhitespace(arr);
    }

    return cnt;
}
int main()
{
    char arr[20];
    cout << "Please enter a name:\n";
    scanf ("%[^\n]s", arr);
    printf( "%s\n", arr);
    int cnt = countWhitespace(arr);
    cout << cnt << endl;
    return 0;
}