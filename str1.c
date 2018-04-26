#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char msg[256];
	int i, tam;
	printf("Digite a mensagem: ");
	fgets(msg,256,stdin);
	tam = strlen(msg);
	printf("\nTamanho da string: %d", tam-1);
	for(i=0; i<tam; i++)
	{
		if(msg[i]>96)
			msg[i] -= 32;
	}
	if(strncmp(msg, "BOM DIA", 7) == 0)
		printf("\nBom dia para voce tambem!");
	if(strncmp(msg, "TCHAU", 5) == 0)
		printf("\nSaindo? Que pena ...");
	if(strncmp(msg, "BOM DIA", 7) != 0)
		printf("\nVoce quis dizer %s ?", msg);
	return 0;
}