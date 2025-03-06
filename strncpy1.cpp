#include <stdio.h>
#include <string.h>

int main() {

/*If the length of the source string is greater than or equal to n:
    strncpy will copy exactly n characters from the source string, but it
    will not automatically add a null-terminating character. In this case,
    you need to manually add the null-terminating character to ensure
    the destination string is properly terminated.*/

    char src[] = "Hello, World!";
   char dest[6];

    // Copy up to 5 characters to leave space for the null-terminator
    strncpy(dest, src, sizeof(dest) - 1);

    dest[sizeof(dest) - 1] = '\0';

    printf("Destination: %s\n", dest);
       // Manually add the null-terminating character


    char str1[] = "Beautiful Day";
    char str2[] = "abcde";

    strncpy(str2, str1, 5);
   // strncpy(str1, str2, 5);//This will  be clean coz str2 ends with \0

    puts(str1);
    }
