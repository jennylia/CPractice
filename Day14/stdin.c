#include <stdio.h>

int main(){
	char buffer[80];
	int age;
	char name[10];
	puts("Enter your age");
	scanf("%d", &age);
	//gets(buffer);
	fflush(stdin);

	puts("Enter your name");

	scanf("%s", name);
	fflush(stdin);

	printf("yo age: %d\n", age);
	printf("yo name: %s\n", name);
	return 0;
}