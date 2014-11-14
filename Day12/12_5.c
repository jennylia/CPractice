#include <stdio.h>

int main(){
	// .. define a variable local to int main(int argc, char const *argv[])
	int count = 0;

	register int x = 10;
	printf("\nOutside the block count = % d", count);

	// start a block

	{
		//define variables local to the block
		int count = 999;
		printf("\nInside the block count = % d", count);	
	}

	printf("\nOutside the block again, count = % d", count);

printf("%s\n", "register");
	printf("%d\n", x);
	// printf("%c\n", &x);
	return 0;
}