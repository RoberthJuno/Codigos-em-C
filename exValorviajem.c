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
	
	printf("Qual � o valor em reais que voc� tem disponivel R$: ");
	scanf("%f",&v);
	
	if (v >= 10000){
		printf("V� se divertir que voc� tem condi��es de viajar. \n");
	}
	else if ((v > 5000) || (v < 9999)){  
	 
		printf(" Junte mais um pouquinho de dinheiro e depois vai viajar. \n");
	}
	else{
		printf("� infelizmente voc� n�o ir� viajar pois, n�o tem dinheiro suficiente. \n");
	}
	system("pause");
	return 0;
}
