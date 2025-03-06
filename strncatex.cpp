/*
The strncat function is similar to strcat, but it appends up to a specified
number of characters from the source string to the destination string.
Its prototype is:
char *strncat(char *dest, const char *src, size_t n);

dest: The destination string, which must be large enough to hold the concatenated resulting string.
src: The source string to be appended to the destination string.
n: The maximum number of characters to be appended from the source string.
How strncat Works
It starts at the end of the destination string (just before the null-terminating character).
It copies up to n characters from the source string to the destination string.
It continues copying until it encounters the null-terminating character of the
source string or until n characters have been copied.
It adds a null-terminating character at the end of the concatenated string.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char dest[10] = "Hello, ";
    char src[] = "World!";

    // Append up to 4 characters from src to dest
    strncat(dest, src, 4);

    printf("Concatenated String: %s\n", dest);

    return 0;
}
