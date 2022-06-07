// Leia 10 valores e ao final imprima  a media aritmetica dos valores vindos

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	system("color d");
	
	int i, d;
	float num2, num, med;
	
	inicio:
	printf("_____________________________________\n\n");
	printf("\t Média ARITMÉTICA \n\n");
	printf("_____________________________________\n\n");
	
	
	for(i=1; i<=4; i++){
	
	printf("Digite o %d valor: ",i);
	scanf("%f", &num);
	printf("\n\n");
	
	printf("Você digitou: %.2f " , num);
	printf("\n\n");
	printf("_____________________________________\n\n");
	sleep(1);
	
	num2 = num+1;
	med = num/i;	
	
	}
	printf("A média aritmética dos valores é: %.2f ", med);
	printf("\n\n");
	
	printf("Você desejar continuar com outros valores ? \n\n" );
	meio:
	
	printf("Digite [1] para SIM \n\nDigite [2] para NÃO: ");
	scanf("%d",&d);
	printf("\n\n");
	
	switch(d){
		
		case 1:
			printf("Vamos continuar... \n\n");
			sleep(2);
			goto inicio;
			break;
			
		
		case 2:
			printf("Ok gostei de caucular com você. \n\n");
			sleep(2);
			break;
		
		default:
			printf("Opção inválida, escolha uma opção válida ! \n\n");
			sleep(2);
			fflush(stdin);
			goto meio;
			break;
	}
	printf("_____________________________________\n\n");
}
	
