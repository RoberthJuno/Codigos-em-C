#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	system("color 9");
	
	float v;
	
	printf("____________________________________ \n");
	printf("\t Verificador de Viajem. \n ");
	printf("____________________________________ \n");
	printf("\n");
	
	printf("Qual é o valor em reais que você tem disponivel R$: ");
	scanf("%f",&v);
	
	if (v >= 10000){
		printf("Vá se divertir que você tem condições de viajar. \n");
	}
	else if ((v > 5000) || (v < 9999)){  
	 
		printf(" Junte mais um pouquinho de dinheiro e depois vai viajar. \n");
	}
	else{
		printf("É infelizmente você não irá viajar pois, não tem dinheiro suficiente. \n");
	}
	system("pause");
	return 0;
}
