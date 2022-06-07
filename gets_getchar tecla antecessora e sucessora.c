#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//conversor de tipo

int main(){
	
	char letra;
	char nome[50];
	printf("\nPressione uma tecla: ");
	letra= getchar();				//aguarda uma tecla do teclado.
	printf("\nA tecla apertada foi %c\n",letra);
	printf("\nA tecla sucessora e %c\n",letra+1);
	printf("\nA tecla antecessora e %c\n",letra-1);
	printf("\n");
	printf("Digite seu nome completo: ");
	fflush(stdin); 					// limpa memoria do teclado
	gets(nome);
	printf("Seu nome:%s\n\n",nome);
	system("pause");
	
	return 0;	
}
