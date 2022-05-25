#include <iostream>
using namespace std;

void strLen(char arr[]){

    int Len =0 ;

    while ( *arr != '\0'){

        arr++;
        Len++;
    }
    cout << Len;
    cout << "\n" << arr;
}

int main (){

    char arr[20] ;
    cout << "Please enter a string: ";
    cin >> arr;
    cout << "\n" << arr << endl;

    strLen(arr);

    return 0;
}