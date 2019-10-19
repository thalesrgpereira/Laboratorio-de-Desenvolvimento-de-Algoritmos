#include <stdio.h>
int main(){
	int i,j, tam ; 
	for(i=0; i < 5; i++){
		for(j=0; j < 5; j++){
		   (j==4)?printf("X\n"):printf("X\t");
		}
	}
    printf("Voce quer desenhar um quadrado de que tamanho: \n");	
	scanf("%d",&tam);
	for(i=0; i < tam; i++){
		for(j=0; j < tam; j++){
		   (j==(tam-1))?printf("X\n"):printf("X\t");
		}
	}
	return 0;
}
