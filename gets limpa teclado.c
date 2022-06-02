// comando gets() para string

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>


	int main(){
		
	system("color E");
	setlocale(LC_ALL,"Portuguese");
		
	char nome[50],end[30],fone[15];
	int ped;
	float peso;
	
	printf("Digite o número do pedido: ");
	scanf("%d",&ped);
	
   	printf("Digite o peso da carne: ");
	scanf("%f",&peso);
	
	printf("Digite o nome do cliente: ");
	fflush(stdin);// limpa o buffer do teclado
	gets(nome);
	
	printf("Digite o endereço: ");
	fflush(stdin);// limpa buffer do teclado 
	gets(end);
	
	printf("Digite o número do telefone (xx)xxxx-xxxx: ");
	fflush(stdin);
	gets(fone);
	
	printf("==============================\n");
	printf("\n*** AÇOUGUE DO PORCÃO ***\n");
	printf("==============================\n");
	printf("\n");
	printf("PEDIDO:         %i\n",ped); //%d ou %i
	printf("PESO DA CARNE:  %.3f\n",peso); //.3f
	printf("CLIENTE:        %s\n",nome);
	printf("ENDREÇO:        %s\n",end);
	printf("TELEFONE:       %s\n",fone);
	printf("==============================\n");
	
	system("pause");
		
	return 0;
}
