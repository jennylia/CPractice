#include <stdio.h>
#include <string.h>

char message1[60] = "Four score and seven years ago...";
char message2[60] = "abcdefghijkl";
char temp[60];

int main() {
	printf("\nMessage1 before memset(): %s\n", message1);
	memset(message1 + strlen(message1), '@', 10);
	printf("Message1 after memset(): %s\n", message1);

	strcpy(temp, message2);
	printf("%s\n", temp);
	printf("%s%s\n", "The original mesagge: ", temp);
	memcpy(temp +4, temp + 6, 10);
	printf("%s%s\n", "The after memcpy mesagge: ", temp);

	strcpy(temp, message2);
	memcpy(temp +6, temp + 4, 10);
	printf("%s%s\n", "The after memcpy mesagge overlap: ", temp);


	strcpy(temp, message2);
	printf("%s\n", temp);
	printf("%s%s\n", "The original mesagge: ", temp);
	memmove(temp +4, temp + 6, 3);
	printf("%s%s\n", "The after memmove mesagge: ", temp);

	strcpy(temp, message2);
	memmove(temp +6, temp + 4, 3);
	printf("%s%s\n", "The after memmove mesagge overlap: ", temp);

		return 0;	
}
