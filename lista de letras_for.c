#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("color D");
	
	char letra[5];  // 5 posi��es
	int i;
	
	for (i=0; i<5;i++);
		
		printf("Digite a %d� letra: ",i+1);
		fflush(stdin);  // limpar buffer do teclado
		scanf("%c", &letra[i]);
	}
	printf("\n Lista das Letras: \n");
	
	for (i=0; i<5; i++){
		
		printf("%d� letra: %c2c \n",i+1,letra[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
