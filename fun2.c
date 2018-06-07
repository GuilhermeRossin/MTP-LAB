#include<stdio.h>
void resultado(int a, int b){
	printf("\nQuociente: %d", a/b);
	printf("\nResto: %d", a%b);}
int main(){
	int a, b;
	printf("Digite A: ");
	scanf("%d", &a);
	printf("\nDigite B: ");
	scanf("%d", &b);
	resultado(a,b);
	return 0;}