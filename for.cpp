#include<stdio.h>

int main(){
	
	int i;
	
	printf("\n      CONTADOR CRESCENTE     \n");
	for(int i = 1;  i<= 10; i++){
		printf("\nNumero %d\n", i);
	}
	printf("\n     CONTADOR DECRESCENTE     \n");
	for(int i = 10;  i>= 1; i--){
		printf("\nNumero %d\n", i);
	}
	return 0;
}	


