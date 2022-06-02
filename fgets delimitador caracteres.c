#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("color f");
	
	char palavra[12];
	
	printf("Digite uma palavra: ");
	fgets(palavra,7,stdin); // delimita a quantidade de caracteres imprimindo a quantidade entre () ali <- 5, msm que defimos mais no começo
	printf("\n");
	puts(palavra); // imprime so o valor da variavel 
	
	system("pause");
	return 0;	
}
