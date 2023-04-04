#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Insira sua idade:");
	scanf("%d", &idade);
	
	if((idade >= 18) && (idade <= 65)) {
		printf("Eleitor obrigatório");
	} else if ((idade >= 16) || (idade >= 65)) {
		printf("Eleitor Facultativo");
	} else {
		printf("Não eleitor");
	}
	
	return 0;
}
