#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
# define TAM 4

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("color D");
	
	char letra[TAM];  // 5 posi��es
	int i;
	
	for (i=0; i<TAM;i++){
	
		
		printf("Digite a %d� palavra: ",i+1);
		fflush(stdin);  // limpar buffer do teclado
		scanf("%c", &letra[i]);
	}
	printf("\n Lista das Letras: \n");
	
	for (i=0; i<TAM; i++){
		
		printf("%d� letra: %2c \n",i+1,letra[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
