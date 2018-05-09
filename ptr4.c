#include <stdio.h>
int main()
{
	float num1, num2, soma, *num_1, *num_2, *p_soma;
	printf("Digite o num 1: ");
	scanf("%f", &num1);
	printf("Digite o num 2: ");
	scanf("%f", &num2);
	num_1 = &num1;
	num_2 = &num2;
	printf("\nEndereco num = %f: %p \nEndereco num = %f: %p", num1, num_1, num2, num_2);
	soma = num1 + num2;
	p_soma = &soma;
	printf("\nEndereco soma = %f: %p",soma, p_soma);
	return 0;
}