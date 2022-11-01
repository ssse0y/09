#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	int student[6];
	
	student[0]=10;
	student[1]=20;
	student[2]=30;
	student[3]=40;
	student[4]=50;
	student[5]=60;
	student[6]=70;
	
	for (i=0; i<6; i++){
		printf("student[%d]= %d\n", i, student[i]);
	}
	
	
	
	return 0;
}
