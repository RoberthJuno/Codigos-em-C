#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	
	srand(time(NULL)); // para gerar valores aleatorios
	
	char faces[13]= {'A','2','3','4','5','6',
					'7','8','9', 'X','J','Q','K'};
	
	char naipes[4][8] = {"ESPADAS", "PAUS", "COPAS", "OUROS"};
	
	printf("%c \n", faces[0]);
	printf("%c \n", faces[rand()%13]); // dentro do colchete e o indice do vetor
	printf("\n\n");
	printf("\t SORTEIO  DA CARTA \n");
	
	printf("\t %c de %s \n ", faces[rand()%13], naipes[rand()%4]);
	printf("\n");
	system("pause");
	return 0;
}
