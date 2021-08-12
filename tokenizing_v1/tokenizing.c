#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" //include the tokenizing header file
#include <stdio.h> // include standard input and output


void tokenizing() {
	printf("*** Start of Tokenizing Words Demo ***\n"); // Welcome message for the application
	// variables that are required for the applications to work
	char words[200]; // string that can save up to 200 characters
	char* word; 
	int w_counter; // int for the word counter

	while (TRUE)  { // while loop to make the artefact run
	printf("Type a few words seperated by space(q - to quit):\n");
	gets(words); // get the string of words entered by the user
	if (strcmp(words, "q") == 0) break; // if the user only enters q, breaks the loop
	word = strtok(words, " "); // sends the address of each word that is typed by the user, and tokenize them
	w_counter = 1; // this is to give a number value to the first word
		while (word)  { // for loop for to split up the words
			printf("Word #%d is \'%s\'\n", w_counter++, word); //This function prints out each word that is typed in by the user
			word = strtok(NULL, " "); // This changes the word to the next word typed in by the user
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n"); // End message for the artefact
}
