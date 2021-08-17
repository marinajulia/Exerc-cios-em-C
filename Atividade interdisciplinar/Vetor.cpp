#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"");
int notas[3];
float media;
printf("\t\t Programa de notas escolares 2021!");

printf("\n\n Entre com a nota do primeiro bimestre: \n");
scanf("%d", &notas[0]);

printf("\n\n Entre com a nota do segundo bimestre: \n");
scanf("%d", &notas[1]);

printf("\n\n Entre com a nota do terceiro bimestre: \n");
scanf("%d", &notas[2]);

printf("\n\n Entre com a nota do quato bimestre: \n");
scanf("%d", &notas[3]);

media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

printf("%f", media);

if(media < 6)
	printf("\n\n Você não foi aprovado, envie um e-mail para a secretaria para refazer as matérias deste ano\n");

if(media >= 6)
	printf("\n\n Parabéns!! Você foi aprovado, até o ano que vem!!");
	return 0;
}
