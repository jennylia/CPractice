#include <stdio.h>

int main(){
	char buf1[90];
	char buf2[90];
	char buf3[90];
	int age;

	puts("Your first and last name separated by space.");
	scanf("%[^ ]%s%s%d", buf1, buf2, buf3,&age);

	printf("First name: %s\n", buf1);
	printf("Last name: %s\n", buf2);
	printf("2Last name: %s\n", buf3);
	printf("age: %d\n", age);
}