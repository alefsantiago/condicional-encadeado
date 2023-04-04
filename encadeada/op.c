#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");

    int opcao;
    float n1, n2, resultado;

    printf("Selecione uma op��o:\n");
    printf("1- Somar dois n�meros.\n");
    printf("2- Multiplicar dois n�meros.\n");
    printf("3- Subtrair dois n�meros.\n");
    printf("4- Dividir dois n�meros.\n");

    printf("\nEscolha uma op��o: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("\nDigite um n�mero para somar: ");
        scanf("%f", &n1);
        printf("\nDigite um n�mero para somar: ");
        scanf("%f", &n2);
		resultado = n1 + n2;
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 2) {
        printf("\nDigite um n�mero para multiplicar: ");
        scanf("%f", &n1);
        printf("\nDigite um n�mero para multiplicar: ");
        scanf("%f", &n2);
		resultado = n1 * n2;
        printf("Resultado: %.2f", resultado);
    }
    else if(opcao == 3) {
        printf("\nDigite um n�mero para subtrair: ");
        scanf("%f", &n1);
        printf("\nDigite um n�mero para subtrair: ");
        scanf("%f", &n2);
		resultado = n1 - n2;
        printf("Resultado: %.2f", resultado);
	}
    else if(opcao == 4) {
        printf("\nDigite um n�mero para multiplicar: ");
        scanf("%f", &n1);
        printf("\nDigite um n�mero para multiplicar: ");
        scanf("%f", &n2);
        if(n2 == 0) {
            printf("Erro: divis�o por zero!");
        }
        else {
            resultado = n1 / n2;
            printf("Resultado: %.2f", resultado);
        }
    }
    else {
        printf("Op��o inv�lida!");
    }

    return 0;
}

