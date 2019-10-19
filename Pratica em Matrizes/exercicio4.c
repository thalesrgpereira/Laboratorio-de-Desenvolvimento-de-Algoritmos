#include <stdio.h>
int main(){
	int i, notas[10][2];
	for(i=0; i < 10; i++){
		printf("Informe duas notas do aluno %d: \n",i+1);
		fflush(stdin);
		scanf("%d %d",&notas[i][0],&notas[i][1]);   	
	}
	printf("nota1 \t nota2 \t media\n");
	for(i=0; i < 10; i++){
		printf("%d \t %d \t %.2f\n",notas[i][0],notas[i][1], (float)((notas[i][0] + notas[i][1]) / 2));
	}
	
	return 0;
}
