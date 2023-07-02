/*progama quadrodo e cubo*/
#include <stdio.h>

int main(void){
	int numero;
	int quadrado, cubo;
	
	printf("digite um numero :");
	scanf("%d", &numero);
	
	quadrado = numero * numero;
	cubo = numero * numero * numero;
	
	printf("O quadrado de %d he : %d\n", numero,quadrado);
	printf("Ocubo de %d he:  %d\n", numero, cubo);
}
