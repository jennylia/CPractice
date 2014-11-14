// 14_2.c
#include <stdio.h>
// #include <conio.h>

int main(){
	int ch;

	while ( (ch=getch()!='a')){
		putchar(ch); // puts the char one at a time
	}
}