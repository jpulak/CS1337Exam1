#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

/*
When use library functions for C-string. Argument can be in the form of:
- name of array holding C-string
- pointer to C-string
- string literal
Some examples below
*/

int main()
{

    /////

    // strlen
    cout << strlen("Hello") << endl; // string literal as argument
    char myArr[40] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << strlen(myArr) << endl; // array as argument
    char * charPtr = myArr;
    cout << strlen(charPtr) << endl; // pointer as argument
    cout << sizeof(myArr) << endl;  // size is still 40
    cout << charPtr  << endl;
    cout << *charPtr  << endl;

    // strcat
    cout << "\nstrcat" << endl;
    strcat(myArr, " there!");
    cout << myArr << endl;
    /////

    //strcmp
    cout << "strcmp" << endl;
    cout << strcmp("Hello", "Hellp") << endl;
    cout << strcmp("Hellp", "Hello") << endl;
    cout << strcmp("Hello", myArr) << endl;
    cout << strcmp("Hello there!", myArr) << endl;

    // atoi
    cout << "\natoi\n";
    cout << atoi("123") - 120 << endl;
    cout << atof("123.45") + 1000 << endl;
    cout << atoi("$123$") << endl;

    return 0;
}
