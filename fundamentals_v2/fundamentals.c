//Fundamentals v1

#include "fundamentals.h"

void fundamentals () 
{
    printf ("*** Start of Indexing Strings Demo ***\n");
    char buffer1 [81];  // char array size 80 initialized 
    char num_input [11];  // char array size 10 intialized
    int position;  
    while (TRUE)   //loops until user enters q to quit
    {
        printf("(q=quit) Enter a String: ");
        gets(buffer1);   // gets() Reads characters from the standard input(stdin) and stores them as a C string into str until a newline character or the end - of - file is reached.
        if (strcmp(buffer1, "q") == 0) break;   //quit if buffer1 matches to be q

        while (TRUE)   //loops until user enters q to quit
        {
            printf("(q=quit) Char at index (0-%d): ",strlen(buffer1)-1);  //index should be in range from 0 to strlen(buffer1) - 1
            gets(num_input);
            if (strcmp(num_input, "q") == 0) break;      //quit if num_input matches to be q
            position = atoi(num_input);    //converts num_input from char to int
            printf("                                 is \'%c\'\n", buffer1[position]);   //printf the value stored in certain index
        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n"); // end of version 1

    //Fundamentals v2
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[80]; // char array size of 79 initialized
    while (TRUE) // enter while loop
    {
        printf("Type a string (q- to quit) :\n"); 
        gets(buffer2); // gets() Reads characters from the standard input(stdin) and stores them as a C string into str until a newline character or the end - of - file is reached.
        if (strcmp(buffer2, "q")==0) break; //quit if buffer2 matches to be q
        printf ("The length is %lu\n", strlen(buffer2)); // display message with length of char array
    }
    printf("*** End of Measuring Strings Demo *** \n\n");
}