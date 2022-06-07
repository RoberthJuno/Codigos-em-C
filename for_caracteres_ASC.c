#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

int main(){
	
	system("Color D");
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=0; i<=255; i++){
		
		printf("[%3d] = caractere %c - decimal %x - octal %o \n\n",i,i,i,i);
		
	}
	
	getchar();
	return 0;
}
