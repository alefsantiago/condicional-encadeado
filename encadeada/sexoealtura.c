#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	char sexo;
	float PesoIdeal, alt;
	
	printf("Digite seu sexo:");
	scanf("%c", &sexo);
	
	printf("Digite sua altura:");
	scanf("%f", &alt);
	
	if ((sexo == 'f') || (sexo == 'F') || (sexo == 'm') || (sexo == 'M')) {
		printf("Seu sexo: %c", sexo);
		printf("\nSua altura: %.2f", alt);		
	} 
	
	if ((sexo == 'f') || (sexo == 'F')) {
		PesoIdeal = (62.1 * alt) - 44.7;
		printf("\nPeso Ideal: %.2f", PesoIdeal);
		
	} else if ((sexo == 'm') || (sexo == 'M')) {
		PesoIdeal = (72.7 * alt) - 58;
		printf("\nPeso Ideal: %.2f", PesoIdeal);
		
	} else {
		printf("Valor invalido");
	}


	return 0;
}
