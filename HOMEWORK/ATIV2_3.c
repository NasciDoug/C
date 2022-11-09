#include<stdio.h>

int recursao (int);

int main(){
	printf("%d", recursao(12));
}

int recursao (int n){
	if (n<=4){
		return n+2;
	}
	else{
		return (recursao(n/3));
	}
}
