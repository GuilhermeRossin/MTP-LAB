#include <conio.h>
#include <stdio.h>

int main()
{
	double fat=1;
	int num, x=1, i;
	printf("Digite o numero: ");
	scanf("%d", &num);
	for(i=0; i<num; i++){
		fat=fat*x;
		x++;
	}
	printf("\nValor do fatorial: %lf", fat);
	return 0;
}