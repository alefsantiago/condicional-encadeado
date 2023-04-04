#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float media;
	
	printf("Insira sua nota:");
	scanf("%f", &media);
	
	if(media >= 5) {
		printf("Aprovado");
	} else if (media < 3 ) {
		printf("Reprovado");
	} else {
		printf("Exame");
	}
	
	
	
	return 0;
}
