#include <stdio.h>
int main(){
	int i,j;
	printf("Paramid Pattern\n");
	for(i=1;i<6;i++){
		printf("%d:",i);
		for(j=1;j<6;j++){
			printf("%4d",i*j);
		}
		printf(" \n");
	}
	return 0;
}



