#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{

char str1[] = "0123456789";
char str2[] = "abcde";
char str3[] = "0123456789";
char str4[] = "abcde";
strncpy(str1, str2, 5);
strcpy(str3, str4);
puts(str1);
puts(str3);
}
