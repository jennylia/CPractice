#include <stdio.h>

void func1(void (*p) (void));
void one(void);
void two(void);
void other(void);

int main(){
	
	void (*ptr) (void);
	int a;
	for (;;){
		puts("Enter a interger 1 to 10, 0 to exit:\n");
		scanf("%d", &a);
		if(a == 0)
			break;
		else if(a == 1)
		ptr = one;
		else if( a == 2)
		ptr = two;
		else
		ptr = other;
		
		func1(ptr);
	}

	return 0;
}

void func1(void (*ptr) (void)){
	// the pointer
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