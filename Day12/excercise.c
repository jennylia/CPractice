#include <stdio.h>

void print_letter2(void);
int ctr;

char letter1 = 'x';

char letter2 = '=';

int main(){
	for (ctr = 0; ctr < 10; ctr ++)
	{
		printf("%c\n", letter1);
		print_letter2();
	}
	return 0;
}

void print_letter2(void){
	int ctr;
	for (ctr = 0; ctr < 2; ctr ++)
		printf("%c", letter2);
}