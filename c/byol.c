
# include <stdio.h>
# include <stdlib.h>

# include <readline.h>
# include <history.h>

/* Declare a buffer for the user input of size 2048 */

int main( int argc, char** argv) {
	
	/* Print version and exit information */
	puts("Lispy version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/* In a never ending loop */
	while (1) {

		/* Output our promt and get input */
		char* input = readline("lispy> ");

		/* Add input to history */
		add_history(input);

		/* Echo input back to user */
		printf("No you are a %s", input);

		/* Free retrieved input */
		free(input);

	}

	return 0;

}

