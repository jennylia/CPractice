#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned num;
	int *ptr;
	// ptr is a pointer to an int
	// to assign it's value, it need to be pointer casted

	printf("%s\n", "enter the number of type int to allocate" );

	scanf("%d", &num);

	ptr = (int *) calloc (num, sizeof(int));


	if(ptr != NULL)
		puts("Memory allocation was good.");
	else
		puts("failed");

	free(ptr);


	return 0;
}
