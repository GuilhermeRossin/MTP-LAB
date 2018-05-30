#include<stdio.h>
void impares(){
	int i=1;
	while(i<21){
		printf("%d ", i);
		i=i+2;}	
}
void pares(){
	int i=2;
	while(i<21){
		printf("%d ", i);
		i=i+2;	
	}
}
int main(){
	int opcao;
	do{
	printf("\n1 - Impares\n2 - Pares\n3 - Sair\nDigite uma opcao: ");
	scanf("%d", &opcao);
	getchar();
	switch(opcao){
		case 1: impares();
			break;
		case 2: pares();
			break;
		case 3: return 0;
		default:
			break;
	}
	}while(opcao != 4);
	return 0;
}