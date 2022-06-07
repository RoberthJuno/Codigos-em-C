#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("color d");
	setlocale(LC_ALL, "Portuguese");
	
	int i,j,n;
	
	// imprimindo
	
	printf("Qual a altura da piramide: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){  // altura da piramide
	
		for (j=1; j<=n-i; j++) 	// espaços em branco
			printf(" "); 		// afastamento da borda esquerda
		
		for(j=1; j<=2*i-1; j++){ // quantidade de * na linha
			printf("X");
		}
	printf("\n");	
	}
	
	system("pause");
	return 0;
}
