#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	system("color b");
	
	int i;
	
	for (i=0; i<=50; i++){
		printf("%d \n", i*2);
	}
	
	system("pause");
	return 0;
	
}
