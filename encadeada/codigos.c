#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Insira seu codigo:");
	scanf("%d", &codigo);
	
	if (codigo == 1) {
		printf("Escriturário");
	} else if (codigo == 2) {
		printf("Secretaria");
	} else if (codigo == 3) {
		printf("Caixa");
	} else if (codigo == 4) {
		printf("Gerente");
	} else if (codigo == 5) {
		printf("Diretor");
	} else {
		printf("Codigo Invalido");
	}
	
	
	return 0;
}
