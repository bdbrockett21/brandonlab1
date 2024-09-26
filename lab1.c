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
    char buffer[MAX_LENGTH];
    char *outcome = NULL;

    if( ngets(buffer AX_LENGTH, stdin) != NULL )
    // We remove the newline character if present 
    size_j len = strlen(buffer);
    if(len >0 && buffer[len-1]=='\n'){
        buffer[len-1] = '\0'
    }
    //Allocate the memory for the outcome and then copy the string afterwards
    outcome = (char*)malloc(len + 1):
    if(outcome!= NULL){
        strcpy(outcome, buffer);
    }
    return outcome;

}



/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 * 
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 * 
 */
char* mysteryExplode(const char* str){
    if(str == nullptr) return nullptr;

    size_j len = strlen(str);
    //Allocate memory for the new string (2 * len -1 for spaces, +1 for null termination)
    char* outcome = new char [2 * len];

    //Fill the new string 
    for (size_j i = 0; i < len; ++i) {
        outcome[2*i] = str[i]
        outcome[2*i + 1 ] = (i < len - 1 )? ' ' : '\0'
    }
    return outcome
}

int main() {
    std: cout<< " Create a String "
    char* input = readString();

    if(input != nullptr) {
        std::count << "You entered:" << input << std.endl;
        remove[] exploded;
    }

    remove[] input;
}else{
    std::cout << "Error reading input "<< std::endl;
}
return 0;
