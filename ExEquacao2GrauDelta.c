
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	float a, b, c, delta, x1, x2;
	
	setlocale(LC_ALL,"Portuguese");
	system("color D");
	printf("---------------------------------------------------- \n\n");
	printf("\n");
	
	printf("Calculo de ra�zes da fun��o do 2� grau. \n\n");
	printf("\n");
	
	printf("---------------------------------------------------- \n\n");
	printf("\n");
	
	
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	printf("Digite o valor de c: ");
	scanf("%f",&c);
	printf("\n");

	printf(" Para n�o esquecer nunca, tem uma musiquinha, vamos aprender a cantar ? \n");
	printf("\n");
	sleep(2);
	
	printf("Se 'DELTA' � igual 'B' ao QUADRADO \n\n");
	sleep(2);
	printf("  MENOS '4' x 'A' x 'C'. \n ");
	printf("\n");
	sleep(3);
	
	delta = ((b*b)-4*a*c);	 // Musica para n�o esquecer: Se delta � igual B ao QUADRADO menos 4 A C.
	printf("\n");
	
	sleep(2);
	printf("O valor de delta � %.2f \n",delta);
	printf("\n");
	
	if (delta>=0){
		x1= ((-b+sqrt(delta))/2*a);
		x2= ((-b-sqrt(delta))/2*a);
		printf(" x1 = %.2f \n",x1);
		printf(" x2 = %.2f \n",x2);
		printf("\n");
	}
	else
	   printf("N�o existe ra�z de valor real. \n");
	printf("\n");
	
	system("pause");
	return 0;
}
