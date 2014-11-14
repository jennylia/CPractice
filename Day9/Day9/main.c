#include <stdio.h>

#define MAX 10

//the problen is you have to declare how big this array is
int array[7], count, i;

int largest(int *array);


int main(){
    printf("Hello my darling\n");
    i = 0;
    while(1){
        printf("Enter a number please: \n");
        scanf("%d", &array[i]);
        
        if(array[i] == 0)
            break;
        
        i++;
        
    }
    
    int answer = largest(array);
    
    printf("And the largest number is %d in this array\n", answer);
    return 1;
}

int largest(int *array){
    int max = -100000;
    int j = 0;
    
    
    while(array[j] != 0){
        if( array[j] > max){
            max = array[j];
        }
        j++;
    }
    
    
    return max;
}