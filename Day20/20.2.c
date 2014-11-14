#include <stdio.h>
#include <stdlib.h>

// definition of a structure that is 2014 bytes in size

struct kilo {
	struct kilo *next;
	char dummy[1022];
};

int FreeMem(void);

int main() {
		printf(" You have %d kilobytes free\n", FreeMem() );
	return 0;	
}

int FreeMem(void){
	// return the number of kilo

	int counter;
	struct kilo *head, *current, *nextone;

	current = head = (struct kilo*) malloc (sizeof (struct kilo));

	if(head == NULL)
		return 0;

	counter = 0;

	do {
		counter ++;
		current->next = (struct kilo*) malloc (sizeof(struct kilo));
		current = current->next;
	}while (current != NULL);

	current = head;

	do{
		nextone = current->next;
		free(current);
		current = nextone;

	}
	while(nextone != NULL);

	return counter;
}	
