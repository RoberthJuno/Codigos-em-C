#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	system("color d");
	
	int i;
	
	for (i=0; i<=100; i++){
		printf("%d \n", i);
	}
	
	system("pause");
	return 0;
	
}
