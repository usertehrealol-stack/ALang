// Compiler for A
// A is an esoteric programming language made by me!

#include <stdio.h>
#include <string.h>

int main() {
	FILE *fptr;

	fptr = fopen("main.a", "r"); // Edit main.a in the same folder you include this file.
	if (fptr == NULL) { // if main.a was not found
		printf("The main.a file was not found. Try putting main.a in the same directory/folder you put this compiler (well really interpreter) in and try again.\n");
		return 1;
	}
	// Read file contents
	char outPut[640]; // Realistically, what more do you need?
	int number = 0; // For the counter
	int i;
	// Read contents of the string one by one and see if it contains "a" (output Hello, World!), 
	// "+" (increment a counter), "-" (decrement) and "." (output counter value as DIGIT, not ASCII)
	while (fgets(outPut, 640, fptr)) {
		for (int i = 0; outPut[i] != '\0'; i++) {
			char reader = outPut[i];
			if (reader == 'a' || reader == 'A') {
				printf("\nHello, World!");
			} else if (reader == '+') {
				number++;
			} else if (reader == '-') {
				number--;
			} else if (reader == '.') {
				printf("%d\n", number);
			}
		}
	}
	fclose(fptr);
	return 0;
}
