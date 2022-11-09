#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=3, j=3, k=3;
	double x=0.0, y=2.3;
	int result = (i && j) && k;
	
	printf("\nResultado = %d\n", result);
	
	if (result)
		printf("\nA expressão é avaliada como TRUE\n");
	else
		printf("\nA expressão é avaliada como FALSE\n");	
	
	
	return 0;
}
