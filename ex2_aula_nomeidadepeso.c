#include<stdio.h>	// biblioteca de entrada e saida, input, output
#include<stdlib.h> // system só funciona com a biblioteca lib
#include<locale.h> // para utilizar acentuações


int main(){
	
	system("color f");				// primeiro cdg muda fundo e 2 cdg muda fonte, so 1 cdg muda a fonte. de A a 9 e A a F.
	setlocale(LC_ALL,"Portuguese"); // função localiza todos caracteres locais do idioma em aspas duplas " "	
	
	int idade;
	float massa;
	char nome[10];
	
	printf ("Qual é o seu nome: ");
	scanf ("%s", &nome);
	printf ("Digite a sua idade e depois digite seu peso: ");
	scanf ("%d %f", &idade, &massa);
	printf ("%s a sua idade é: %d anos e seu peso é: %.3f kg \n ", nome, idade, massa);
	
	system("pause");
	return 0;
}
