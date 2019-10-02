#include <stdio.h>
int main(){
	int i, maior = 0, vetor[10];
		printf("Informe 10 numeros:");
	for(i = 0; i < 10; i++) 
		scanf(" %d",&vetor[i]);
	for(i = 0; i < 10 ; i++ ) 
		if(vetor[i] > maior) maior = vetor[i];	
	printf("O maior numero e: %d\n",maior);
	return 0;
}
