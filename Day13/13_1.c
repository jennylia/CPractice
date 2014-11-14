#include <stdio.h>

char s[] = "This is a test string. It conatins me!";

int main(){
	int count = 0;
	printf("The original string is: %s\n", s);

	while (s[count]!= '\0')
	{
		if(s[count] == '.')
		{
			s[count++] = '.';
			s[count++] = '\0';
			break;
		}

		count ++;
	}

	printf("New string: %s\n", s);

	return 0;;
}