#include <stdio.h>

void clear_kb(void);

int main(){
	int age;
	char name[20];

	puts("Enter your age: ");
	scanf("%d", &age);

// now clear
	clear_kb();

	puts("Enter your name.");
	scanf("%s", name);

	printf("Your age: %d\n", age );

	printf("Your age: %s\n", name );
	return 0;
}


void clear_kb(void){
	char junk[80];
	gets(junk);

	//fflush(stdin);
}