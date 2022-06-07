#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define L 3
#define C 3

int main(){

	setlocale(LC_ALL, "Portuguese");
	system("color d");

	int i,j;
	int ma[L][C];
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){		
		printf("Digite os valores da matriz [%d] [%d]: \n",i,j);
		scanf("%d",&ma[i][j]);
		}
	}	
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			printf("%3d",ma[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0; i<L; i++){
		for(j=0; j<C; j++){
			if (ma[i][j] %2 == 1){
				printf("%3d", ma[i][j]);
			}
			printf("\n");
		}
	}
	printf("\n\n");
	
	system("pause");
	return 0;	
}
