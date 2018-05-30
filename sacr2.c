#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_dado(){
	int soma;
	for(int i=0; i<5; i++){
		soma = soma + (rand()%6 +1);
	}return soma;}
int main(){
	int i, soma, flag;
	srand(time(0));
	printf("SIMULADOR DE DADO.");
	for(i=0; i<3; i++){
		printf("\nRodada %d:", i+1);
		soma = soma_dado();
		printf("%d", soma);
		if(soma>=18 && soma<=23){
			printf("Voce ganhou.");
			return 0;}}
	return 0;}