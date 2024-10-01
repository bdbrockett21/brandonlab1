#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 * 
 * fileName is c-string representing the file to read.
 * 
 */
char* readString(char* fileName){
    char* ret = (char*) malloc(100);

    FILE *fileptr = fopen(fileName, "r");

    fgets(ret, MAX_LINE_LEN, fileptr);

    fclose(fileptr);
    ret[strcspn(ret, "\n")] = '\0';
    return ret;
}

/*
 
mysteryExplode - takes a string of characters and explodes it
as follows:
A non-empty string such as "Code" is turned into "CCoCodCode".*
Return a new string similar to the string given above.*
Example:
mysteryExplosion("Code") --> "CCoCodCode"
mysteryExplosion("abc") --> "aababc"
mysteryExplosion(":)") --> "::)"
*/
#include <string.h>
#include <stdlib.h>

char* mysteryExplode(const char* str) {
    if (str == NULL) return NULL;

    int len = strlen(str);
    // Allocate memory for the exploded string
    // The size is (len * (len + 1) / 2) for the characters + len - 1 for spaces + 1 for null terminator
    char* exploded = (char*) malloc((len * (len + 1) / 2) + len);
    
    if (exploded == NULL) return NULL; // Check if allocation was successful

    int index = 0;
    for (int x = 1; x <= len; x++) {
        // Copy x characters from str
        strncpy(exploded + index, str, x);
        index += x;
        
        // Add a space after each substring, except for the last one
        if (x < len) {
            exploded[index] = ' ';
            index++;
        }
    }
    
    exploded[index] = '\0';
    return exploded;
}