// Kevin Mao
// 053037065
// kmao3@myseneca.ca
// CPR101NHH

#include "converting.h"

// Converting function
void converting() {
	printf("*** Start of Converting Strings to int Demo ***\n"); // Print

	// Variables
	char int_string[80]; // Char array int_string
	int int_number;

	// Continue looping until q is entered
	while (TRUE) {
		printf("Type the int numeric string (q - to quit):\n");

		// gets a string
		gets(int_string);

		// If the string is q, quit
		if (strcmp(int_string, "q") == 0) break;

		// atoi function converts str to int
		int_number = atoi(int_string);

		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n"); // Print

	// ==================================================================

	printf("*** Start of Converting Strings to double Demo ***\n");

	char double_string[80]; // Char array double_string
	double double_number; // Double number to be converted to

	// Continue looping until q is entered
	while (TRUE) { 
		printf("Type the double numeric string (q - to quit):\n");

		// gets a string
		gets(double_string);

		// If the string is q, quit
		if (strcmp(double_string, "q") == 0) break;

		// atof function converts str to double
		double_number = atof(double_string);

		printf("Converted number is %f\n", double_number);
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");
}