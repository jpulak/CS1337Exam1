#include <stdio.h>
#include <string.h>

int main() {

    char src[] = "Hello, World!";
    char dest[26] = "Beautiful day it is!";

    // If the destination already has a string only the first n characters will be
    //replaced in the destination string
    // Copy up to 5 characters
    strncpy(dest, src, 12);

/*
	If the length of the source string is less than n: strncpy
    will copy the entire source string, including the null-terminating
    character, and then pad the destination array with additional
    null characters until a total of n characters have been written.*/

    //strncpy(dest, src, sizeof(dest) - 1); //This will copy the entire source

    // Manually add the null-terminating character
    dest[sizeof(dest) - 1] = '\0';

    printf("Destination: %s\n", dest);

    return 0;
}
