#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	system("Color e");
		
	int i;
	
	for(i=1; i<=10; i++){
		printf("%3d ",i);
		sleep(1);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

