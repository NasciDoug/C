#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=20;
	
	int result;
	
	result = i << 1;
	
	printf("\nResultado = %d\n", result);
	
	return 0;
}
