// JOGO DA MEMORIA


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#define TAM 3

int main(void){
	
	int i=0,j=0,acertou=0;
	char c;
	int numeros[TAM];
	int respostas[TAM];
	
	system("color E");
	setlocale(LC_ALL,"Portuguese");
	SetConsoleTitle("Jogo da Memória Simples\n");
	
	srand(time(NULL));
	
	printf("Este programa irá gerar %d números entre 1 e 30\n",TAM);
	printf("Você deve memorizar os números na ordem\n");
	printf("Pressione ENTER para iniciar\n");
	
	do{
		c=getch();
	}while(c!=13);
	
	for(i=0;i<TAM;i++){
		numeros[i]= (rand()%30)+1;
		
	}
	j=5;
	do{
		system("cls");
		printf("Memorize os números em %d:\n",j);
		j--;
		for(i=0;i<TAM;i++){
			printf("%d\t",numeros[i]);
			
		}
		Sleep(1000);
		
	}while(j>0);
	
	system("cls");
	printf("Digite os números\n");
	
	for(i=0;i<TAM;i++){
		printf("\t%d* número: ",i+1);
		scanf("%d",&respostas[i]);
		if(respostas[i]== numeros[i]){
			acertou++;
		}
	}
	if(acertou ==TAM){
		printf("Parabéns, você tem boa memória!\n");
		for(i=0;i<TAM;i++){
			printf("%d\t",numeros[i]);
		}
	}
	else{
		printf("\nQue pena!\n");
		for(i=0;i<TAM;i++){
			printf("%d\t",numeros[i]);
			
		}
	}
	printf("\n\n");
	system("pause");
	
	return 0;
}
