#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main( ){
	setlocale(LC_ALL,"Portuguese");
	system("color F");
	float Notas[4][4];
	int i,j;
	
	for (i=0;i<4;i++){
		for (j=0;j<3;j++){
			printf("Para o aluno %d informe a nota %d: \n",i+1,j+1);
			scanf("%f",&Notas[i][j]);
		}
		Notas[i][3]=Notas[i][0]+Notas[i][1]+Notas[i][2];
	}	
    // imprimir as notas
    
    for (i=0;i<4;i++){
    	printf("Nota do aluno %d: \n",i+1);
    	for (j=0;j<3;j++){
    		if (j != 2)
    		   printf("%.1f\t",Notas[i][j]);
    	   else
    	      printf("%.1f\t",Notas[i][j]);
		 }
		 printf("Nota final ........ %.1f\n",Notas[i][3]/3.0);
	 }

	printf("\n\n");
	return 0;
}
