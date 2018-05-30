#include <stdio.h>
#include <conio.h>
#include <math.h>

float cal_delta(float a, float b, float c){
	int delta;
	delta = (b*b)-(4*a*c);
	return delta;}
float raizes(float delta, float a, float b){
	if(delta > 0){
		printf("\nRaiz 1: %f", ((-b)+sqrt(delta))/2*a);
		printf("\nRaiz 2: %f", ((-b)-sqrt(delta))/2*a);}
	if(delta == 0)
		printf("\nRaiz 1 = Raiz 2 : %f ", (-b)/(2*a));
	if(delta < 0)
		printf("\nNAN");}
int main(){
	float a, b, c, delta;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	delta = cal_delta(a, b, c);
	raizes(delta, a, b);
	return 0;}