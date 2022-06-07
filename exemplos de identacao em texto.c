#include<stdio.h>
#include<stdlib.h>
#include<conio.h> // usar getche e getchar
#include<locale.h>

int main (){
	
	system("color f");
	setlocale(LC_ALL, "Portuguese");
	
	int lapis = 35, borracha = 128, caderno = 1200;
	
	printf ("---------------------------------- \n ");	
	printf ("Lapis =    %6d \n ", lapis);
	printf("Borracha = %6d \n ", borracha);
	printf("Caderno =  %6d \n ",caderno);
	printf ("---------------------------------- \n ");
	
	system("pause");
	return 0;
}
