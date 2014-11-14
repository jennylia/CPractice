#include <stdio.h>

void func1(int x);
void one(void);
void two(void);
void other(void);

int main(){
	int a;
	for (;;){
		puts("Enter a interger 1 to 10, 0 to exit:\n");
		scanf("%d", &a);
		if(a == 0)
			break;

		func1(a);
	}

	return 0;
}

void func1(int x){
	// the pointer
	void (*ptr) (void);

	if(x == 1)
		ptr = one;
	else if( x == 2)
		ptr = two;
	else
		ptr = other;
	ptr();
}

void one(void){
	puts("You entered 1.");
}

void two(void){
	puts("you entered 2");
}

void other(void){
	puts("You entered other stuff");
}