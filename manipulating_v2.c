#include <stdio.h> //main header file
#include "manipulating.h" //function header file


void manipulating() //Function
{ //Start of function
printf("*** Start of Comparing Strings Demo ***\n"); 
char compare1[80]; //char string 1 set to 80 with safe space
char compare2[80]; //char string 2 set to 80 with safe space
int result;        //declared int result 
while (TRUE) {     //while loop set to TRUE
    printf("Type the 1st string to compare (q - to quit): \n");
    gets(compare1); //gets first string
    if(strcmp(compare1, "q") == 0) break; //exit statement
    printf("Type the 2nd string to compare:\n");
    gets(compare2); //gets second string
    result = strcmp(compare1, compare2); //result = both strings
    if (result < 0) //if result is less than 0 then this statement runs
    printf("1st string is less then 2nd\n");
    else if (result ==0) //if result == 0 then this statement runs
    printf("1st string is equal to 2nd\n");
    else
    printf("1st string is greater than the 2nd\n");
} //end of loop
printf("***End of comparing Strings Demo **\n\n"); //ending statement for program
} //end of function dec