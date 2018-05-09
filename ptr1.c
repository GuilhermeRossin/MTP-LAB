#include <stdio.h>
int main()
{
	unsigned int var = 0xFACA8421;
	unsigned char *vet;
	int i=0;
	printf("Variavel : %X", var);
	printf("\nPosicao: %p", var);
	printf("\nVariavel em decimal: %d", var);
	printf("\nVariavel em decimal unsigned: %u", var);
	vet = (unsigned char *)&var;
	for(i=0; i<sizeof(var); i++){
		printf("\nEbdereco: %p", vet+i);
		printf("\nValor decimal unsigned: %u", *(vet+i));
		printf("\nValor decimal: %X", *(vet+i));
	}
	return 0;
}