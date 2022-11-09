#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=7, j=7;
	double x=0.0, y=999.9;
	int result;
	
	result = !(x+3.3) + !!y + !!!i + 55;
	
	printf("\nResultado = %d\n", result);
	
	return 0;
}
