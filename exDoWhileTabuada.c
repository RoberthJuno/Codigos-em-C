#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("************** TABUADA ************** \n\n");
	
	int cont=1, p;
	float n;
	
	inicio:
	printf("De que número você deseja ver a tabuada: ");
	scanf("%f",&n);
	printf("\n\n");
	
	do{
		printf("%.1f x %d = %.1f \n",n,cont,cont*n);
		cont = cont + 1;
	}
	while (cont < 11);
	printf("\n");
	
	printf("Obrigado por caucular. \n");
	
	system("pause");
	return 0;

}
