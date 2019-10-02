#include <stdio.h>
int main(){
	int i, cont = 0, vetor[10];
	printf("Informe 10 numeros:");
	for(i = 0; i < 10; i++) 
		scanf(" %d",&vetor[i]);
	for(i = 0; i < 10 ; i++ ) 
		if(vetor[i] == 3) cont++;	
	printf("Vezes em que o numero 3 aparece: %d\n",cont);
	return 0;
}
