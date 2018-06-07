#include <stdio.h>
void soma_fracoe(int a, int b, int c, int d){
	int x, y;
	x= (d*a) + (b*c);
	y= b*d;
	printf("Resultado: %d / %d", x, y);}
int main(){
	int a, b, c, d;
	printf("\nDigite o valor de a: ");
	scanf("%d", &a);
	printf("\nDigite o valor de b: ");
	scanf("%d", &b);
	printf("\nDigite o valor de c: ");
	scanf("%d", &c);
	printf("\nDigite o valor de d: ");
	scanf("%d", &d);
	soma_fracoe(a, b, c, d);
	return 0;}