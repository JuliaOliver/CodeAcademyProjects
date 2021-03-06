/* Write a function htoi(s) that converts a string of hexadecimal digits to an equivalent integer value. 
Possible numbers are between 0 and 9, from a to f and from A to F. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

unsigned long long htoi(char stringToConvert[]);

int isValid(char stringToConvert[]); /* Validation function added */
int operation(int choice); /* Operation funcion added, where all the program is */
char numRangeStart = '0'; /* Variable for the beginning of the range of numbers we're allowed to use */
char numRangeEnd = '9'; /* Variable for the end of the range of numbers we're allowed to use */
char letterRangeStart = 'A'; /* Variable for the beginning of the range of letters we're allowed to use */
char letterRangeEnd = 'F'; /* Variable for the end of the range of letters we're allowed to use */

int main(){
    operation(1); /* Calling only one function in main */

    return 0;
}

int isValid(char stringToConvert[]){ /* Implementaion of validation function */
    int invalidInputCounter = 0;

    for (int i = 0; i < strlen(stringToConvert); i++){
        stringToConvert[i] = toupper(stringToConvert[i]);
        }

    for (int i = 0; i < strlen(stringToConvert); i++){
        if (!(stringToConvert[i] >= numRangeStart && stringToConvert[i] <= numRangeEnd) 
        && !(stringToConvert[i] >= letterRangeStart && stringToConvert[i] <= letterRangeEnd)){ 
            invalidInputCounter += 1;
        }
    }

    if (invalidInputCounter > 0){
        return 0;
    }

    return 1;    
}

int operation(int choice){ /* Here's the function that we're calling in main, where the operation happens */
    
    while(choice != 0){
        char stringToConvert[10];
        printf("Please enter a Hexidesimal which you want to convert to a Decimalnumber:\n0x");
        scanf("%s", &stringToConvert);
        htoi(stringToConvert);
 
        while (1){
            printf("If you want to continue press 1.\nIf you want to exit press 0.\n");
            choice = 0;
            scanf("%d", &choice);
            if (choice == 1){
                htoi(stringToConvert);
                break;
            }
            else if(choice == 0)
                break;
            else{
            printf("Invalid command, please try again!\n");
            }
        }
    }
}

unsigned long long htoi(char stringToConvert[]){ /* The conversion happens here, same way as the collegues who optimized the code for first time */
    if (isValid(stringToConvert) == 0){ /* Before converting, we chech by calling the validation function if the entered number is valid */
        printf("Invalid input\n");
    }
    else{
        unsigned long long result = strtol(stringToConvert, NULL, 16);
        printf("Hex: %s\nDec: %ld\n", stringToConvert, result);
    }
}
