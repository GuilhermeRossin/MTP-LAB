#include <conio.h>
#include <stdio.h>

int main ()
{
	double p, b, x=1;
	int i;
	printf("Digite a base: ");
	scanf("%lf", &b);
	printf("Digite a potencia: ");
	scanf("%lf", &p);
	for( i=0; i<p; i++){
		x=x*b;
	}
	printf("Valor: %lf", x);
	return 0;
}