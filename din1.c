#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double media_vet(double num[], int n){
	double soma = 0.0f, media;
	for(int i=0; i<n; i++){
		soma += num[i];}
	media = soma/n;
	return media;}
double desvio_padrao(double num[], double media, int n){
	double p, sigma, variacao = 0.0f;
	for(int i=0; i<n; i++){
        p = (num[i] - media);
        variacao += p*p; }
    sigma = sqrt((variacao)/(n-1));
    return sigma;}	
int main(){
	int i, n;
	double *num, media, desvio;
	printf("Digite o numero de termos: ");
	scanf("%d", &n);
	num = calloc(n, sizeof(double));
	for(i=0; i<n; i++){
		printf("\nDigite o termo %d: ", i+1);
		scanf("%lf", &num[i]);}
	media = media_vet(num, n);
	printf("\nValor da media: %lf", media);
	desvio = desvio_padrao(num, media, n);
	printf("\nValor do desvio padrao: %lf", desvio);
	free(num);
	return 0;}