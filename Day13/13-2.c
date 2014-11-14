#include <stdio.h>

int main(){
	char buffer[81];

	int ctr;

	
	puts("Enter a line here");
	gets(buffer);
	

	//. go through the string 
	// instead of <10, you can buf[i]!= '\0'
	// as an effective way to traverse
	for (ctr = 0; buffer[ctr]!='\0'; ctr++){
		// if the character is a lower case 'a' remove

		if(buffer[ctr] == 'a'){
			continue;
			//continue skips a iteration while break skips a loop
		}
		putchar(buffer[ctr]);
	}



	return 0;
}