#include <stdio.h>
#include <conio.h>

int main()
{
	int num, soma =0, x=1, i;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=0; i<num-1; i++)
	{
		if(num % x == 0)
			soma = soma +x;
		x++;
	}
	if(soma == num)
		printf("\nO numero e perfeito.");
	else
		printf("\nO numero nao e perfeito.");
	return 0;
}