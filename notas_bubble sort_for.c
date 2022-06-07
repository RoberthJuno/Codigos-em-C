#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 4 // CONSTANTE

/* bubble sort
	i>i+1 // condicao
	aux = i
	i=i+1
	i+1 = aux
*/

int main(){
	
	system("color D");
	setlocale(LC_ALL,"Portuguese");
	
	int i, aux, cont;
	float nota[TAM], soma=0, soma1;
	
	printf("_______________Notas dos Capirotos__________________ \n\n");
	
	// captura as notas 
	for(i=0; i<TAM; i++){
		printf("Digite a %dª nota do capiroto: \n",i+1);
		scanf("%f", &nota[i]);
		soma = soma + nota[i];
	}
	printf("\n");
	printf("A soma das notas é: %1.f",soma);
	printf("\n\n");
	
	soma1 = (soma/TAM);
	
	// Apresenta as notas capturadas
	
	printf("As notas digitadas foram: ");
	for(i=0; i<TAM; i++){
		printf(" %4.1f", nota[i]);
		}
	
	printf("\n\n");
	//	ordena as notas digitadas
	
	for(cont=1; cont<TAM; cont++){
		for(i=0; i<TAM-1; i++){
			if (nota[i] > nota[i+1]){
				aux = nota[i];
				nota[i] = nota[i+1];
				nota[i+1] = aux;	
			}
		}
	}
	
	// Apresenta as notas ordenadas
	
	printf("As notas ordenadas é: ");
	for(i=0; i<TAM; i++){
		printf(" %4.1f", nota[i]);
	}
	printf("\n\n");
	
	
	printf("A média das notas é: %1.f", soma1);
	
	printf("\n\n");
	
	if (soma1 >= 6.0){
		printf("Aluno aprovado. \n");
	}
	else if (soma1 >= 5.0){ // && (soma2 <= 5.9)){
		printf("Aluno em recuperação. \n ");
	}
	else{
		printf("Aluno reprovado. \n ");
	}	
	
	printf("\n");
	system("pause");
	return 0;
}
