#include <stdio.h>

int main()
{
	int zero[4], i, vet[4];
	char *pont;
	for(i=0; i<4; i++)
		zero[i] = '0';
	for(i=0; i<4; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	pont = (char*)&vet;
	for(i=0; i<sizeof(vet); i++)
		printf("%c", *(pont+i));
	return 0;
}