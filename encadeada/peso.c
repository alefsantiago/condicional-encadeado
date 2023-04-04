#include <stdio.h>
#include <locale.h>

int main() {
	
	float peso,e,m;
	
	printf("Digite o peso do produto:");
	scanf("%f", &peso);
	
	e = 0;
	m = 0;
	
	if(peso > 50) {
		e = peso - 50;
		m = e*4.0;
		printf("Resultado: %.2f", m);
	} else if (peso > 0){
		printf("O valor esta invalido: %.2f", e);
	} else {
		printf("O valor esta invalido: %.2f", m);
	} 
	
	return 0;
}
