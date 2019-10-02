#include <stdio.h>
#include <string.h>
int main(){
	char primeiro[50], segundo[50];
	int ret;
	printf("Digite o primeiro nome: ");
	//o espaco no inicio e para revomer o enter do buffer
	scanf(" %50[^\n]s",&primeiro);
	//foi usado fflush para apagar o que foi digitado a mais que 50 caracteres
	//trocar por __fpurge() no linux.
	fflush(stdin);
	printf("Digite o segundo nome: ");
	scanf(" %50[^\n]s",&segundo);
	printf("O primeiro nome tem %d caracteres.\n",strlen(primeiro));
	printf("O segundo nome tem %d caracteres.\n",strlen(segundo));
	ret = strcmp(primeiro,segundo);
	if( ret > 0) {
		printf("O primeiro nome e maior que o segundo.");
	}
	else {
		if(ret < 0) {
			printf("O segundo nome e maior que o primeiro.");
		}
		else {
			printf("Os nomes tem o mesmo tamanho.");
		}
	}
	return 0;
}
