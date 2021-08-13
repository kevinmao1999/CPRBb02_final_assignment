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
}

{ //Start of function for comparing
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