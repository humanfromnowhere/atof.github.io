#include <stdio.h>
#include <stdlib.h>
#define SIZE 250
float myAtof(char *string, char *error);

int main()
{
    char string[SIZE];            // Array declaration.
    float fnum1;
    char errorState=0;

    printf("Enter a number:\n");
    gets(string);

    fnum1=myAtof(string,&errorState);

    if (errorState==0){
        printf("Your number is: %.2f \n", fnum1);
    }else if (errorState==1){
        printf("Error has been occurred due to inappropriate input!\n");
    }

    return 0;
}

float myAtof(char* string, char* error){          // Function to convert string into float.

    //your code comes here!!
}
