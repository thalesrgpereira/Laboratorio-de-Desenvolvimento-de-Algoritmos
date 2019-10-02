#include <stdio.h>
#include <string.h>
int main(){
	char texto[50] = "",texto2[50] = "";
	int i, j;
	printf("Digite um texto: ");
	scanf(" %50[^\n]s",&texto);
	for(i = strlen(texto) -1,j = 0; i >= 0 ; i--, j++) 
		texto2[j] = texto[i];
	(strcmp(texto,texto2))? printf("O texto nao e um palindromo!") : printf("O texto e um palindromo!");
	return 0;
}
