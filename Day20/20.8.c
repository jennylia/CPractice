#include <stdio.h>
#include <string.h>

struct emp_data{
	
	char fname[20];
	char lname[20];
	char ssnumber[10];
	unsigned dental :1;
	unsigned college :1;
	unsigned health :2;
};

struct emp_data workers[10];


int main() {
		workers[0].dental = 1;
		workers[1].dental = 0;
		workers[3].dental = 1;
		//workers[4].fname='chealser'
		strcpy(workers[4].fname, "Mill");
		for (int i = 0; i < 100; i++){
			printf("%d\n", workers[i].dental);
			printf("%s\n", workers[i].fname);
		}
		return 0;
	}
