#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	system("color a");

	int i,j;
	int ma[2][2];
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){		
		printf("Digite os valores da matriz [%d] [%d]: \n",i,j);
		scanf("%d",&ma[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%3d",ma[i][j]); // exibe a matriz	
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	system("pause");
	return 0;	
}
