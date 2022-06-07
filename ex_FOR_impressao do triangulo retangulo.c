#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
# define TAM 4

int main(){
	system("color d");
	setlocale(LC_ALL, "Portuguese");
	
	int i,j;
	
	// imprimindo triangulo retangulo
	
	for(i=0; i<=TAM; i++){  // controla as linhas
		
		for(j=0; j<=i; j++ ){  //controla as colunas
			printf("%2c", 'X');	
		}		
		printf("\n");
		sleep(1);
	}
	system("pause");
	return 0;
}
