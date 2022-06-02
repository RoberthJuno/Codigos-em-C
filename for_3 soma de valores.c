#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	system("color b");
	int i, n, val, soma=0;
	
	
	printf("Quantos valores voce quer somar: ");
	scanf("%d", &n);
	printf("\n");w
	
	for (i=1; i<=n; i++){
		
		printf("Digite um valor inteiro: ");
		scanf("%d", &val);
		printf("\n");
		soma = soma+val;
	}
	printf("-------------------------------------------------------------\n");
	printf("A soma dos %d valores digitados são: %d \n\n", n, soma);
	
	system("pause");
	return 0;
	
}
