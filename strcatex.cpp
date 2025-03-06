/*
The strcat function concatenates two strings. It appends the source string
to the destination string and adds a null-terminating character at the end.
Its prototype is:
char *strcat(char *dest, const char *src);
dest: The destination string, which must be large enough to hold the
 concatenated resulting string.
src: The source string to be appended to the destination string.

It starts at the end of the destination string (just before the null-terminating
character).
It copies each character from the source string to the destination string.
It continues copying until it encounters the null-terminating character of the
source string.
It adds a null-terminating character at the end of the concatenated string.

*/


#include <stdio.h>
#include <string.h>

int main() {
    char dest[9] = "Hello, ";
    char src[] = "World!";

    strcat(dest, src);

    printf("Concatenated String: %s\n", dest);

    return 0;
}
