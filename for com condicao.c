#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	
	char palavra[13] = "Alex Silva";
	
	int i;
	
	for(i=0; palavra[i] != '\0'; i++){ 
		printf("Valor do elemento % da string = %c \n",i,palavra[i]);
	}
	printf("=============================================================\n");
	for(i=0; i<13; i++){	
		printf("Valor do elemento % da string = %c \n",i,palavra[i]);
	}
	
	printf("Total de caracteres: %d \n",strlen(palavra));
	printf("Tamanho para a string: %d \n", strlen(palavra)+1);
	
	system("pause");
	return 0;	
}
