#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=1, j=2, k=3;
	
	printf("A express�o => (i<(j-k)) retournou %d", (i<(j-k)) );
	
	if (i<(j-k))
		printf("\n\n---- Express�o avaliada como TRUE ----\n\n");
		
	else
	
		printf("\n\n---- Express�o avaliada como FALSE ----\n\n");
		
	return 0;
}
