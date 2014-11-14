#include <stdio.h>


void func1(void);

int main(){
	int count;

	for (count = 0; count <20; count ++){
		printf("At iteration %d: ", count );
		func1();
	}
	
}

void func1(){

	static int x = 1;

	int y = 1;
	printf("x = %d and y = %d\n",x,y);

	x++;
	y++;

}
