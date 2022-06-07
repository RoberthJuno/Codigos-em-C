#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (int argc, char * argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i=1;
	while (i<11){
		
		printf("%2d \n ", i);
		i=i+1;
	}
	return 0;
}
