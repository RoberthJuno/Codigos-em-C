#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	system("color b");
	
	int cont=0;
	float num;
	
	printf("\t\t Tabuada \n\n");
	
	printf("Digite o número da tabuada desejada: ");
	scanf("%f", &num);
	printf("__________________________________________ \n");
	
	for (cont =0; cont <= 10; cont++){
		system("color e");
		printf("%.2f x %2d = %.2f \n", num , cont, num*cont);
	}
	
	printf("_______________________________________________ \n");
	
	system("pause");
	return 0;
}
	
	
	
