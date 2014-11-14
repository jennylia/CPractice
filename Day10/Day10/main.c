#include <stdio.h>
#include <stdlib.h>


// eamples one
// didn't allocate space, let's see....
char *some;


int main(){
    
    // puts("Enter some text, press enter..:");
    // gets(some);
    
    // printf("You entered: %s\n", some);
    
    some= malloc(10 * sizeof(char));
    
    puts("Enter some text, press enter 2..:");
    scanf("%c",&some[3]);
    printf("You entered: %c\n", some);
    
    char string = "asdfdasf";
    return 0;
    
}