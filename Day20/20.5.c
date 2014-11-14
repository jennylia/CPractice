#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCKSIZE 30000

int main() {

	void *ptr1, *ptr2;
	// allocate one block;

	ptr1 = malloc(BLOCKSIZE);

	if(ptr1 != NULL)
		printf("The first allocation of %d butes was good\n", BLOCKSIZE);
	else{
		printf("%s\n", "You fail");
		exit(1);
	}

	free(ptr1);
		return 0;
}
