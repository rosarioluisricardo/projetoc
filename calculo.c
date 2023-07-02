#include <stdio.h>  

#define SIZE 19

int main(void){
	int a[SIZE] = {1, 2, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45, 43, 27, 90, 123 };
	int i; 
	int total = 0;
	
	for ( i = 0; i < SIZE; i++){
		total += a[i];
	}
	
	printf(" Total de valeres dos  elementos do  array eh %d\n", total);
	
	return 0;
}

