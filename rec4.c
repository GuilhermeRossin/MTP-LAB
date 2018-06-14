#include <stdio.h>
#include <math.h>
void produto1(double a[], double b[], double p[], int n){
	for(int i=0; i<n; i++)
		p[i] = sqrt(a[i]+b[i]);
}
void produto2(double a[], double b[], double p[], int n){
	for(int i=0; i<n; i++)
		p[i] = a[i]+3*b[i];
}
void produto3(double a[], double b[], double p[], int n){
	for(int i=0; i<n; i++)
		p[i] = (pow(b[i], 2)) / a[i];
}
void mostra_vet(double p[], int n){
	for(int i=0; i<n; i++)
		printf("%f ", p[i]);
}
int main(){
	int opcao, i;
	double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0}; 
	double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625}; 
	int n = sizeof(A)/sizeof(double); 
	double P[16];
	do{
		printf("1-Raiz da soma dos vetores.\n2-A+3B\n3-B^2/A.");
		printf("\nDigite a opcao: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				produto1(A,B,P,n);
				mostra_vet(P, n);
				return 0;
			case 2:
				produto2(A, B, P, n);
				mostra_vet(P, n);
				return 0;
			case 3:
				produto3(A, B, P, n);
				mostra_vet(P, n);
				return 0;
			default: break;
		}	
	}while(opcao != 4);
}