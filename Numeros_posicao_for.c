#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

	setlocale(LC_ALL, "Portuguese");
	system("color d");
	
	int vet[3], i, nump, ac;
	
	for(i=0; i<3; i++){
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &vet[i]);
		printf("\n");
		sleep(1);
	}
	
	printf("Qual � o valor procurado: ");
	scanf("%d", &nump);
	printf("\n");
	
	for(i=0; i<3; i++){
		if (vet[i] == nump){
			printf("O n�mero %d est� na posi��o %d \n", nump, i+1);
			ac=1;
		}	
	}
	
	if (ac!=nump){
			printf("O valor n�o existe nesta lista. \n");
		}
	printf("\n");		
	system("pause");
	return 0;
}
