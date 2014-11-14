// inputs a list of string, sort the, 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n, int sort_type);

void print_strings(char *p[], int n);
int alpha(char *p1, char *p2);
int ververse(char *p1, char *p2);

char *lines[MAXLINES];

int main(){
	int number_of_lines, sort_type;

	number_of_lines = get_lines(lines);
	if(number_of_lines <0){
		puts("dayum");
	}

	puts("0 for reverse, 1 for alphabetical\n");

	scanf("%d", &sort_type);
	sort(lines, number_of_lines, sort_type);
	print_strings(lines,number_of_lines);
	return(0);
}

void sort(char *p[], int n, int sort_type){
	int a, b;
	char *x;

	int (*compare) (char *s1, char *s2);
	compare = (sort_type)? reverse: alpha;
}