#include<stdio.h>

int main(){
	int i = 6, X,Y,R;
	scanf("%d", &X);
	scanf("%d", &Y);
	
	while (i>=0){
		if(i%2 == 1)
			++X;
		else 
			++Y;
		--i;
	}
	R = X+Y;
	printf("%d", R);
	return 0;
}
