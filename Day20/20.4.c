#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char buf[80], *message;

	// input a string

	puts("Enter a line of text");
	gets(buf);

	message= realloc(NULL, strlen(buf) + 1);
	strcpy (message, buf);

	puts (message);


	puts("Enter anonother line of text");
	gets(buf);

	message= realloc(message, (strlen(buf) + strlen(message) + 1));
	strcat (message, buf);

	puts (message);


		return 0;
	}
