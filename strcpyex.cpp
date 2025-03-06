#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    char src[] = "Hello, World!";
    //char dest[50];
    char dest[5];

    strcpy(dest, src);

    printf("Destination: %s\n", dest);

    char a[6] = "Hello";
    char b[6];

        strcpy(b,a);
        cout << b << endl;

        cout << strlen(a) << endl;

    return 0;
}
