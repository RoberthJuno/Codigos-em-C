#include <stdio.h>
#include <string.h>

int main(){
	
	
	int i, n;
	char cadastro[30][60], letra; // 30 quantidade de linhas 60 quantidade de caracteres
	
	printf("\t -:- Cadastro de Alunos  -:-\n\n\n");
	
	printf("Quantos alunos deseja cadastrar? ");
	scanf("%d", &n);
	
	printf("\n-------------------------------\n\n");
	
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("Digite o nome do %2d aluno: ", i+1);
		gets(cadastro[i]);
	}	
	
	printf("\n\nListar nomes:\n");
	printf("Escolha a inicial dos nomes a serem exibidos: ");
	scanf("%c", &letra);
	
	for(i=0; i<n; i++){
		if (cadastro[i][0] == letra)
			printf("Aluno %d:\t %s\n", i+1, cadastro[i]);
	}	
}
