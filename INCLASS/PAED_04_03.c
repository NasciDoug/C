#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, j=2, k=3;
	double x=5.5, y=7.7;
	
	printf("A express�o => (x-y) <= ((j-k)-1) retournou %d", ((x-y) <= (j-k)-1 ));
	
	if ((x-y) <= ((j-k)-1))
		printf("\n\n---- Express�o avaliada como TRUE ----\n\n");
		
	else
	
		printf("\n\n---- Express�o avaliada como FALSE ----\n\n");
		
	return 0;
}
