#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main( ){
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	
	char nome[20] = "Joselina";
	int i;
	
	nome[4] = '\0';
		
	for(i=0; i<5; i++){
		printf("Valor do elemento %d da string = %c \n", i, nome[i]);
	}
	
	//printf("Digite seu nome: ");
	//printf("\n");
	//gets(nome);
	
	printf("Nome: %s \n",nome);
	
	system("pause");
	return 0;
	
}
