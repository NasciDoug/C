#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=10, j=12;
	
	int result = (i|j);
	
	printf("\nResultado = %d\n", result);
	
	return 0;
}
