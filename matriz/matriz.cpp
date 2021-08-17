#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nome[30];
	int i;
	
	printf("Digite o primeiro nome: \n");
	for(i=0; nome[i] != ' '; i++){
		nome[i] = toupper(nome[i]);
		printf("\n\n Sobrenome convertido %s\n\n", nome);
	//	getch();
	}
	return 0;
}
