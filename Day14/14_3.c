// 14_3.c
#include <stdio.h>

#define MAX 3

int main(){
	char ch, buffer [MAX+1];
	int x = 0;

	while((ch = getchar() != '\n') && x < MAX){
		buffer[x] = ch;
		x++;
	}
	buffer[x] = '\0';	
	printf("%s\n", "buffer");
	printf("%s\n", buffer);

	return 0;
}