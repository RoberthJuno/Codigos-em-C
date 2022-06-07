#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//conversor de tipo

int main(){
	
	char ch;
	printf("\nPressione uma tecla: ");
	ch= getchar();									//aguarda uma tecla do teclado.
	printf("\nA tecla apertada foi %c\n",ch);
	printf("\nA tecla sucessora eh %c\n",ch+1);
	printf("\nA tecla antecessora eh %c\n",ch-1);
	
	system("pause");
	return 0;
}
