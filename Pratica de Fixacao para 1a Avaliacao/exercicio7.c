#include <stdio.h>
#include <string.h>
int main(){
	char texto[50];
	int i;
	printf("Digite um texto com espacos: ");
	scanf(" %50[^\n]s",&texto);
	for (i = 0; i < 50 && i < strlen(texto); i++){
		if(texto[i] == ' '){
			texto[i] = '\n';
		}
	}
	printf("%s",texto);
	return 0;
}
