#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");

	
	char nome;
	int cpf, NumDep;
	float RendaAnual,desconto, RendaLiq,aliquota,imposto;
	
	printf("\nDigite seu nome:");
	scanf("%s", &nome);

	printf("Digite seu CPF:");
	scanf("%d", &cpf);
	
	printf("Digite o número de dependentes:");
	scanf("%d", &NumDep);	
	
	printf("Digite sua renda anual:");
	scanf("%f", &RendaAnual);
	
	desconto = NumDep*110.0;
	
	RendaLiq = RendaAnual - desconto;
	
	if (RendaLiq < 800.0) {
		aliquota = 0;
		printf("\nO contribuinte esta isento de imposto");
	} else if (RendaLiq <= 4000.0) {
		aliquota = 2.5/100;
		imposto = RendaLiq * aliquota;
		printf("O valor de tributos a pagar: %.2f", imposto);		
	} else if  (RendaLiq <= 9000.0) {
		aliquota = 5/100;
		imposto = RendaLiq * aliquota;
		printf("O valor de tributos a pagar: %.2f", imposto);	
	} else if  (RendaLiq < 9000.0) {
		aliquota = 10/100;
		imposto = RendaLiq * aliquota;
		printf("O valor de tributos a pagar: %.2f", imposto);	 
	} else {
		printf("Valores invalidos");
	}
	
	return 0;
}
