#include <stdio.h>
#include <stdlib.h> /*for atof() */
#include <ctype.h>
#include <math.h>

#define MAXOP 100 /*max size of operand or operator */
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void unetch(int);

/*reverse polish calculator*/

int main(){
	int type;
	double op2;
	char s[MAXOP];
    
	while((type = getop(s)) !=EOF){
		switch (type){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '%':
				op2 = pop();
				if(op2)
					push(fmod(pop(),op2));
                // push(pop() - ((pop()/op2) * op2));
				else
					printf("%s\n", "this is an error, you can't divide by zero");
				break;
                
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push (pop() / op2);
				else
					printf("%s\n", "error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n",s );
				break;
        }
    }
    return 0;
}

#define MAXVAL 100 //max depth of val stack

int sp = 0; // stack pointer
double val[MAXVAL];

//push
void push (double f){
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void){
	if (sp > 0){
		return val[--sp];
	}
	else{
		printf("error: empty stack\n");
		return 0.0;
	}
	
}



//get op. get next char of numberic or operatnd
int getop(char s[]){
	int i, c;
    
	while((s[0] = c = getch()) == ' '|| c=='\t');
    printf("space");
	// s[1] = '\0';
	if(!isdigit(c) && c!= '.')
		return c;
	i = 0;
	if (isdigit(c)) //collect integer part
		while(isdigit(s[++i] = c = getch()));
	if (c == '.') //collect fraction part
		while(isdigit(s[++i] = c = getch()));
	s[i] = '\0';
    
	if (c != EOF)
		unetch(c);
	return NUMBER;
    
}

#define BUFSIZE 100
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */


int getch(void) /* get a (possibly pushed-back) character */ {
	return (bufp > 0) ? buf[--bufp] : getchar(); }


void unetch(int c) /* push character back on input */ {
	if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}







