#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int linha, coluna;
	int matriz [2][2];
	
	for(linha=0; coluna <=2; linha++){
		for(coluna = 0; coluna < 2; coluna ++){
			printf("Digite os valores da linha %d, coluna %d\n", linha +1, coluna +1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	for(linha=0; coluna <=2; linha++){
		for(coluna=0; coluna < 2; coluna ++)
			printf("%d \t", matriz[linha][coluna]);
		printf("veja a sua matriz");
		printf("\n\n");	
	}
	system("pause");
	return 0;
}
