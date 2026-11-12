#include<stdio.h>

int main(){
	int i = 1;
	int x = 10;
	
	printf("\n      CONTADOR CRESCENTE     \n");
	
	while(i <= 10){
		printf("\nNumero %d\n", i);
		i++;
	}
	
	printf("\n     CONTADOR DECRESCENTE     \n");
	
	while(x >= 1){
		printf("\nNumero %d\n", x);
		x--;
	}
	
	
	
	return 0;
}
