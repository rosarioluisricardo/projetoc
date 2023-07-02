#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Digite o primeiro inteiro :");
	scanf("%d", &num1);
	
	printf("Digite o segundo inteiro :");
	scanf("%d", &num2);
	
	int soma = num1 + num2;
	int produto = num1 + num2;
	int diferenca = num1 - num2;
	int quociente = num1 / num2;
	int modulo = num1 % num2;
	
	printf("Soma: %d\n", soma);
	printf("Produto: %d\n", produto);
	printf("Diferenca: %d\n", diferenca);
	printf("Quociente: %d\n", quociente);
	printf("Moldulo: %d\n", modulo);
	
	return 0;
}
