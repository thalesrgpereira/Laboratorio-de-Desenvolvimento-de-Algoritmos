#include <stdio.h>
#include <string.h>
int main(){
	char i, c, vetor[50];
	printf("Digite um nome:");
	for(i = 0; i < 50 && c != '\n'; i++) {
		c = getc(stdin);
		if(c != '\n') vetor[i] = c;
	}
	printf("Seu nome impresso de tres formas:\n");
	printf("%s\n",vetor);
	for(i = 0; i < strlen(vetor); i++) putchar(vetor[i]);
	putchar('\n');
	for(i = strlen(vetor) -1; i >= 0 ; i--) putchar(vetor[i]);
	return 0;
}
