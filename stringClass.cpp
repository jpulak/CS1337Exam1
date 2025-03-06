#include <iostream>
#include <string>

using namespace std;

int main()
{

    // getline
    string name;
    cout << "Input your name: ";
    getline(cin, name);
    cout << "Name is " << name << endl;

    // Initialize strings
    string myOtherString("Chris"); // Literal
    string myStr(myOtherString); // Initialize with another C++ string class
    cout << "myStr is " << myStr
         << ", myOtherString is " << myOtherString << endl;

    return 0;
}



