#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	do{
		printf("\nDigite o número do sabor\n");
		printf("\t 1- Morango\n");
		printf("\t 2- Chocolate\n");
		
		scanf("%d", &i);
		
	}while((i<1) || (i > 3));
	
	switch(i){
		case 1:
			printf("\t\t Morango");
			break;
		case 2:
			printf("\t\t Chocolate");
			break;
	}
	return 0;
}
