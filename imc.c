#include <stdio.h>

int main(){
	float peso, altura;
	float imc;
	
	printf("Digite o seu peso(em kg): ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura(em metros): ");
	scanf("%f", &altura);
	
	imc = peso/(altura * altura);
	
	printf("Seu IMC he : %.2f\n", imc);
	
	if(imc < 18.5){
		printf("Classifica��o: abaixo do peso");
	}else if(imc >= 18.5 && imc <= 24.9){
		printf("Classifica��o: normal\n");
	}else if(imc >= 25 && imc <= 29.9){
		printf("Classifica��o: Acima do peso\n");
	}else{
		printf("Classifica��o: obeso\n");
	}
	
	return 0;
}
