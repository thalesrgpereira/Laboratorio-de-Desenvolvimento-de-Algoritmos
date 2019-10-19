#include <stdio.h>
int main(){
	int i,j, matrix[3][4], cont5 = 0;
	for(i=0; i < 3; i++){
		for(j=0; j < 4; j++){
		   printf("informe o valor para matrix[%d][%d]: ",i,j);
		   fflush(stdin);
		   scanf("%d",&matrix[i][j]);
		   if(matrix[i][j] == 5) cont5++;	
		}
	}
	(cont5 == 1)? printf("O 5 aparece %d vez.\n",cont5):printf("O 5 aparece %d vezes.\n",cont5);
	return 0;
}
