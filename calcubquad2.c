/*program quadrado e cubo 2*/
#include <stdio.h>

int main(void){
	printf("Numero\tQuadrado\tCubo\n");
	
	for (int numero = 0; numero <= 10; numero++){
		int quadrado = numero * numero;
		int cubo = numero * numero * numero;
		
		printf("%d\t%d\t\t%d\n", numero, quadrado, cubo);
	}
	
	return 0;
}
