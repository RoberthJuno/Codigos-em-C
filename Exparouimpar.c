/* Faca um algoritmo que mostra pro usuario se o numero digitado e par ou impar, observacao
Se o resto da divisao for 0, o numero e par (num1%2==0) */ 

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	system("color 5");
	
	int n, r1;
	
	printf("-------------------------------------------- \n");
	printf("\t Verificador de 'PAR' ou 'IMPAR' \n ");
	printf("-------------------------------------------- \n");
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
		
	r1 = (n % 2);
		
	if (r1 == 0){
		printf("O n�mero %d �: 'PAR'. \n", n);
		printf("\n");
	}
	else{
		printf("O n�mero %d �: 'IMPAR' \n",n);
		printf("\n");
	}
	system("pause");
	return 0;
}
