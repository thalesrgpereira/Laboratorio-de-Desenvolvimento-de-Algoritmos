#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char texto[50];
	int i;
	printf("Digite um texto: ");
	scanf(" %50[^\n]s",&texto);
	printf("Seu texto em uppercase: ");
	for (i = 0; i < 50 && i < strlen(texto); i++)
		printf("%c",toupper(texto[i]));
	printf("\nSeu texto em lowercase: ");
	for (i = 0; i < 50 && i < strlen(texto); i++)
		printf("%c",tolower(texto[i]));
	return 0;
}
