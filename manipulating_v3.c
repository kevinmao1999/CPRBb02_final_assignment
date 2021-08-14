#include <stdio.h> //main header file
#include "manipulating.h" //function header file


void manipulating() //Function
{
printf("*** Start of Concatenating Strings Demo ***");
char string1[80]; //char string number 1 set to 80
char string2[80];// char string number 2 set to 80
while (TRUE)    //while statement start -- must be true to enter through
{               
printf("Type the 1st string (q - to quit):\n"); //Print statement for first string
gets(string1); //gets the first string entered by the user
if (strcmp(string1, "q") == 0) break; //Quiting statement
printf("Type the 2nd strings:\n"); //Print statement for second string
gets(string2); //gets the second string entered by the user
strcat(string1, string2); //adds both strings
printf("Concatenated string is \'%s\'\n", string1); //Print statment Concentrates both strings
}
printf("*** End of Concatenating Strings Demo ***\n\n"); //print statement for ending the program


 //Start of function for comparing
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
 //end of function dec

    printf("*** Start of Searching Strings Demo ***\n");
    char big_string[80]; //char big string set tp 80
    char sub_string[80]; //char sub strings set to 80
    char *address;       //declared char address with pointer
    while (TRUE)
    { //Start of while loop only if ture
        printf("Type the big string (q - to quit);\n");
        gets(big_string); //Gets first big string
        if (strcmp(big_string, "q") == 0)
            break; //if statement for big strings and also quiting statement
        printf("Type the substring:\n");
        gets(sub_string);  //Gets first sub string
        address = strstr(big_string, sub_string); //Address set to big string and sub string
        if (address != NULL) //if statement if address is not equal to NULL
            printf("Found at %ld position\n", (long)address - (long)big_string); // long address - long big string
        else  //else print statement
            printf("Not Found\n");
    }
    printf("Enf of Searching Strings Demo");
} //end of program