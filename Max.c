#include <stdio.h>
int main(){
	int matrix[3][3]={{12,45,32},{2,13,45},{56,72,41}};
	int max=0;
	max=matrix[0][0];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j]>=max){
				max=matrix[i][j];
			}
		}
	}
	printf("Maximum value in the matrix is: %d",max);
	return 0;
}
