
#include <stdio.h>
#include <string.h>

int main() {
    char dest[10] = "Hello ";
    char src[] = "World";

    // Ensure the destination array has enough space
    strncat(dest, src, sizeof(dest) - (strlen(dest) + 1));

    printf("Concatenated String: %s\n", dest);

    char str1[18] = "Beautiful Day"; //13 chars
    char str2[] = "abcde";
    strncat(str2, str1, sizeof(str2) - (strlen(str2) + 1)); // overflow
 puts(str2);
    //strncat(str2, str1, 6);
   //puts(str2);
   //strncat(str1, str2, sizeof(str1) - (strlen(str1) + 1));
  //puts(str1);

    return 0;
}

/*
Ln 16
If the size of the destination array is smaller than the combined length
of the destination string and the number of characters you want to append
 from the source string, using strncat can lead to buffer overflow.
 This happens because strncat does not check the size of the
 destination array and will continue to append characters until the
 specified number of characters from the source string is added, followed
 by a null-terminating character.*/
