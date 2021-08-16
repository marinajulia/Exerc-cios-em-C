#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salario, inss, ir, sal_liquido;
	
	printf("Digite seu salário bruto:");
	scanf("%f", &salario);
	
		inss = salario * 0.88;
	if(salario <= 1693.72){
	}else
	if(salario >= 1693.73 && salario <= 2822.90){
		inss = salario * 0.9;
	}
	
	sal_liquido = (salario - inss) - ir;
	
	printf("\n Desconto inss: %f", inss);
	printf("\n Salário líquido: %2.f", sal_liquido);
	return 0;
}
