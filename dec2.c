#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int pont=0, num1, num2, num3, num4, num5;
	printf("Digite um numero divisor de 8192: ");
	scanf("%d", &num1);	
	if(8192 % num1 == 0){
		pont++;
	}	
	while(num2<1327 ){
		num2=rand()%1361;
		if(num2>1327){
			printf("\nNumero sorteado 1: %d", num2);
		}		
	}
	printf("\nInforme a soma do numero sorteado 1 com acrescimo de 101: ");
	scanf("%d", &num3);
	if(num3 == num2+101){
		pont++;
	}
	num4 =  rand()%100;
	printf("\nNumero sorteado 2: %d", num4);
	printf("\nInforme a multiplicacao do numero sorteado 2 por 3: ");
	scanf("%d", &num5);
	if(num5 == num4*3){
		pont++;
	}
	printf("\nPONTUACAO: %d", pont);
	return 0;
}
