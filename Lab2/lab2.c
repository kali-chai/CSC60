/* ----------------
 * Kali Wilson
 * Lab 2            */

/* Preprocessor Directives */
#include <stdio.h>
#include <stdlib.h>	

/* Main function (entry point) */
int main(void) {
	int num1;
	int num2;
	num1 = 5;
	num2 = 7;
	if(num1 < num2) {
		printf("num2 is greater than num1.\n");
	}
	else if(num1 > num2) {
		printf("num1 is greater than num2.\n");
	}
	else {
		printf("num1 is equal to num2.\n");
	}
	printf("\nLab 2.\n\n");
	printf("Hello World\n");
	printf("Hi, Kali.\n\n");
	printf("\"The greatest crimes arise not from necessity, but from excess.\"\n - Aristotle\n");
	/* Exit with status code 0 */
	return EXIT_SUCCESS;
}
