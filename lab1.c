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
    //TODO: Replace this line with your code
    FILE fPtr;
    fPtr = fopen(fileName, "r");

    char cStr = (char)malloc(MAX_LINE_LEN sizeof(char')');

    memset(cStr, '\0', MAX_LINE_LEN);
    fgets(cStr, MAX_LINE_LEN, fPtr);
    int Index = strlen(cStr) - 1;
        cStr[Index] = '\0';

    return cStr;

    fclose(fPtr);

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
char* mysteryExplode(const char* str){
    //TODO: Replace this line with your code
    int length = ((strlen(str) * (strlen(str) + 1)) / 2) + 1;
    char* newStr = (char)malloc(length sizeof(char));

    memset(newStr, '\0', length*sizeof(char));

    int i =1;
    for(int x =0;x<strlen(str);x++){
        strncat(newStr, str, i);
        i++;
    }
    return newStr;