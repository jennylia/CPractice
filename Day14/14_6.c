#include <stdio.h>
#define MAXLEN 10

int main(){
	char buffer[MAXLEN];

	puts("Enter text a line at a time");

	while(1){
		fgets(buffer, MAXLEN, stdin);

		if(buffer[0] == 'x')
			break;

		puts(buffer);
		printf("buffer is%s\n",buffer	 );
	}

	return 0;
}