#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" //include the tokenizing header file
#include <stdio.h> // include standard input and output


void tokenizing() {
	printf("*** Start of Tokenizing Phrases Demo ***\n"); // Welcome message for the application
	// variables that are required for the applications to work
	char phrases[200]; // string that can save up to 200 characters
	char* phrase;
	int p_counter; // int for the phrase counter

	while (TRUE) { // while loop to make the artefact run
		printf("Type a few words phrases seperated by a comma(q - to quit):\n");
		gets(phrases); // get the string of phrases entered by the user
		if (strcmp(phrases, "q") == 0) break; // if the user only enters q, breaks the loop
		phrase = strtok(phrases, ","); // sends the address of each word that is typed by the user, and tokenize them
		p_counter = 1; // this is to give a number value to the first phrase
		while (phrase) { // for loop to split up the phrases
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase); //This function prints out each phrase that is typed in by the user
			phrase = strtok(NULL, ","); // This changes the phrase to the next phrase typed in by the user that was entered after a comma
		}
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); // End message for the artefact
}
