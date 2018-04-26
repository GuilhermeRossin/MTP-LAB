#include <stdio.h>
#include <conio.h>
int main()
{
	int vetor[10],i,j = 9, vetin[10];
	for(i=0; i<10; i++, j--)
	{
		printf("\nDigite o numero da posicao %d: ", i+1);
		scanf("%d", &vetor[i]);
		vetin[j] = vetor[i];
	}
	printf("\n\n");
	j = 0;
	for(j=0; j<10; j++)
		printf("%d ", vetin[j]);
	return 0;
}