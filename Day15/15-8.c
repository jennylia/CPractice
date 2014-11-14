#include <stdio.h>

double square(double x);
int return1(int y);

double (*p) (double x);

int (*pint) (int y);

int main(){
	pint = return1;

	printf("%f %d\n", square(6.6), pint(1111));
	return(0);
}

double square(double x){
	return x * x;
}

int return1(int x){
	return 1;
}