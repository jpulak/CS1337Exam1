#include <iostream>
#include <cmath>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    string value;
    value = "Hello";
    const char * valPtr = value.c_str();
    cout << valPtr << endl;
    char s1[20];
    for(int i = 0; i < 10; i++)
    {
        s1[i] = *(valPtr + i);
    }
    char s2[10] = "world";
    strcat(s1, s2);
    cout <<s1 << endl;

}

