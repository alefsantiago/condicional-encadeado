#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Insira sua idade:");
	scanf("%d", &idade);
	
	if((idade >= 18) && (idade <= 65)) {
		printf("Eleitor obrigat�rio");
	} else if ((idade >= 16) || (idade >= 65)) {
		printf("Eleitor Facultativo");
	} else {
		printf("N�o eleitor");
	}
	
	return 0;
}
