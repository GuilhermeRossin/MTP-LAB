#include <conio.h>
#include <stdio.h>

int main()
{
	float b,h;
	printf("Insira a base do triangulo: ");
	scanf("%f", &b);
	printf("Insira a altura do triangulo: ");
	scanf("%f", &h);
	printf("Area: %f", (b*h)/2);
	return 0;
}
