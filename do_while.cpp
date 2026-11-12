#include<stdio.h>

int main(){
	int i = 1;
	int x = 10;
	
	printf("\n      CONTADOR CRESCENTE     \n");
	
	do{
		printf("\nNumero %d\n", i);
		i++;
	} 
	while (i <= 10);
	
	printf("\n     CONTADOR DECRESCENTE     \n");
	
	do{
		printf("\nNumero %d\n", x);
		x--;
	} 
	while (x >= 1);
	
	
	return 0;
	
}
