#include <iostream>
using namespace std;

class m3_3
{
public:
    void displayFactors(int num)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
                cout << i << "\t";
        } // end of for loop
        cout << "\n";
    } // end of method

    void displayEvenFactors(int num)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if ((num % i == 0) && i % 2 == 0)
                cout << i << "\t";
        }
        cout << "\n";
    }

    void convertCase(char c)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }
        cout << c << "\n";
    }

} // end of class
;