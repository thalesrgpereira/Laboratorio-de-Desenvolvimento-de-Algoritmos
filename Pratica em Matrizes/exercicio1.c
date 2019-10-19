#include <stdio.h>
int main(){
	int i,j, matrix[3][4];
	for(i=0; i < 3; i++){
		for(j=0; j < 4; j++){
		   printf("informe o valor para matrix[%d][%d]: ",i,j);
		   fflush(stdin);
		   scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0; i < 3; i++){
		for(j=0; j < 4; j++){
		   (j==0)?printf("%d",matrix[i][j]):printf(" - %d",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
