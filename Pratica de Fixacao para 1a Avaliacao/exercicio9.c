#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char texto[50];
	int i, f,c;
	printf("Digite um texto com espacos no inicio e ou no final: ");
	scanf(" %50[^\n]s",&texto);
	//pega a posicao do ultimo caractere imprimivel
	for(f = strlen(texto)-1; isblank(texto[f]) && f >= 0; f--);
	//pego a posicao do primeiro caracter imprimivel
	for(i = 0; isblank(texto[i]) && i < 50 && i < strlen(texto); i++);
	//imprime na tela os caracteres da posicao inicial a posicao final
	printf("\"");
	for(c = i; c <= f; c++) 
		printf("%c",texto[c]);	
	printf("\"");
	return 0;
}
