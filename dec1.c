#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("Digite o numero: ");
	scanf("%d", &num);
	if( num % 2 == 0){
		printf("\nO numero e par");
		if( num % 3 == 0 ||num % 7 == 0 )
			printf("\nO numero e multiplo de 3 ou 7");
	}	
	else{
		printf("\nO numero e impar");
		if(num % 5 == 0)
			printf("\nO numero e multiplo de 5");
	}	
	return 0;
}