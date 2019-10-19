#include <stdio.h>
int main(){
	int i,j, matrix[3][4], maior, menor;
	for(i=0; i < 3; i++){
		for(j=0; j < 4; j++){
		   printf("informe o valor para matrix[%d][%d]: ",i,j);
		   fflush(stdin);
		   scanf("%d",&matrix[i][j]);
		   if((i==0) && (j == 0)) {
		   	  maior = matrix[i][j];
		   	  menor = matrix[i][j];
		   }
		   if(matrix[i][j] > maior) maior = matrix[i][j];
		   if(matrix[i][j] < menor) menor = matrix[i][j];
		   	
		}
	}
	for(i=0; i < 3; i++){
		for(j=0; j < 4; j++){
		   (j==0)?printf("%d",matrix[i][j]):printf(" - %d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("O maior numero foi: %d\n",maior);
	printf("O menor numero foi: %d\n",menor);
	
	
	return 0;
}
