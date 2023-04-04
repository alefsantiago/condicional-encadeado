#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");

    int opcao;
    float n1, n2, resultado;

    printf("Selecione uma opção:\n");
    printf("1- Somar dois números.\n");
    printf("2- Multiplicar dois números.\n");
    printf("3- Subtrair dois números.\n");
    printf("4- Dividir dois números.\n");

    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("\nDigite um número para somar: ");
        scanf("%f", &n1);
        printf("\nDigite um número para somar: ");
        scanf("%f", &n2);
		resultado = n1 + n2;
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 2) {
        printf("\nDigite um número para multiplicar: ");
        scanf("%f", &n1);
        printf("\nDigite um número para multiplicar: ");
        scanf("%f", &n2);
		resultado = n1 * n2;
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 3) {
        printf("\nDigite um número para subtrair: ");
        scanf("%f", &n1);
        printf("\nDigite um número para subtrair: ");
        scanf("%f", &n2);
		resultado = n1 - n2;
        printf("Resultado: %.2f", resultado);
	}
    else if(opcao == 4) {
        printf("\nDigite um número para multiplicar: ");
        scanf("%f", &n1);
        printf("\nDigite um número para multiplicar: ");
        scanf("%f", &n2);
        if(n2 == 0) {
            printf("Erro: divisão por zero!");
        }
        else {
            resultado = n1 / n2;
            printf("Resultado: %.2f", resultado);
        }
    }
    else {
        printf("Opção inválida!");
    }

    return 0;
}

