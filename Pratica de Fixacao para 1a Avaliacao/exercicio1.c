#include <stdio.h>
int main(){
	int i, vetor[5];
	printf("Informe 5 numeros:");
	for(i = 0; i < 5; i++) 
		scanf(" %d",&vetor[i]);
	printf("Vetor em ordem crescente: ");
	for(i = 0; i < 5 ; i++ ) 
		printf("%d ",vetor[i]);
	printf("\nVetor em ordem decrescente: ");
	for(i = 4; i >= 0 ; i-- ) 
		printf("%d ",vetor[i]);
	return 0;
}
