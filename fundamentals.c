//Fundamentals v1
#define _CRT_SECURE_NO_WARNINGS

#include "fundamentals.h"

void fundamentals () 
{
    printf ("*** Start of Indexing Strings Demo ***\n");
    char buffer1 [81];
    char num_input [11];
    int position;
    while (TRUE)
    {
        printf("(q=quit) Enter a String: \n012345678012345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
        gets(buffer1);
        if (strcmp(buffer1, "q") == 0) break;

        while (TRUE)
        {
            printf("(q=quit) Char at index (0-%d" , strlen(buffer1)-1);
            gets(num_input);
            if (strcmp(num_input, "q") == 0) break;
            position = atoi(num_input);
            printf("                                 is \'%c\'\n", buffer1[position]);
        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n");
}