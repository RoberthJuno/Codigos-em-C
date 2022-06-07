#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	system("color a");
	
	int i;
	
	for (i=40; i>=0; i--){
		printf("%d \n", i*5);
	}
	
	system("pause");
	return 0;
	
}
