#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	
	int m[3][3], soma[3][3], s1=0, s2=0;	 // esvaziar a memoria da variavel
	int i, j;	// i controla linhas e j as colunas
	
	printf("Digite os valores da matriz : ");
	printf("\n\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o %dº valor: ", i+1);
			scanf("%d",&m[i][j]);
			printf("\n\n");
		}
	}
	
	printf("Soma das linhas \n\n");
	printf("----------------------- \n");
		
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			s1 = s1 + m[i][j];
		}
		printf("Soma da linha %d é: %d", i+1, s1);
		s1 = 0;
		printf("\n\n");
	}
	
	printf("Soma da colunas \n\n");
	printf("-----------------------\n");
	
	for(j=0; j<3; j++){
		for(i=0; i<3; i++){
			s2 = s2 + m[i][j];
		}
		printf("Soma das colunas %d é: %d", j+1, s2);
		s2 = 0;
		printf("\n\n");
	}
	
	system("pause");
	return 0;
}
