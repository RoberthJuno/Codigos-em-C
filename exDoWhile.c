#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int s=0;
	char l;
	
	do{
		printf("Digite '0' para sair do looping \n ");
		printf("%d ª quantidade de vezes. \n ", s);
		l = getchar();
		s = s+1;
	}
	while (l != '0');
	
	return 0;
	
}
