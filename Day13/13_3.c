#include <stdio.h>

int main(){
	int n;

	start: ;
	puts("Enter a number btween 0 and 10");
	scanf("%d", &n);

	if(n<0 || n > 10)
		goto start;
	else if (n == 0)
		goto location0;
	else if (n == 1)
		goto location1;
	else 
		goto location2;

	location0:
	puts("you entered 0\n");
	goto end;

	location1:
	puts("you netered 1\n");
	goto end;

	location2:
	puts("whatever location2");
	goto end;

	end:;
return 0;
}