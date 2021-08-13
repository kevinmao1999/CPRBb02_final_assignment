#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" //include the tokenizing header file
#include <stdio.h> // include standard input and output


void tokenizing() {
	printf("*** Start of Tokenizing Sentences Demo ***\n"); // Welcome message for the application
	// variables that are required for the applications to work
	char sentences[200]; // string that can save up to 200 characters
	char* sentence;
	int s_counter; // int for the word counter

	while (TRUE) { // while loop to make the artefact run
		printf("Type a few words sentences seperated by a dot(q - to quit):\n");
		gets(sentences); // get the string of words entered by the user
		if (strcmp(sentences, "q") == 0) break; // if the user only enters q, breaks the loop
		sentence = strtok(sentences, "."); // sends the address of each word that is typed by the user, and tokenize them
		s_counter = 1; // this is to give a number value to the first word
		while (sentence) { // for loop for to split up the words
			printf("Phrase #%d is \'%s\'\n", s_counter++, sentence); //This function prints out each word that is typed in by the user
			sentence = strtok(NULL, "."); // This changes the word to the next word typed in by the user
		}
	}
	printf("*** End of Tokenizing Sentences Demo ***\n\n"); // End message for the artefact
}
