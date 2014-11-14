#include <stdio.h>

int main(){

	printf("%s\n","from 1 to 10 in while" );

	//int x = 1;
	for(int i = 0; i<10; i++)
	{
		
	
		if (i%2!=0)
			continue;
		printf("%d\n", i);
		
	}
}