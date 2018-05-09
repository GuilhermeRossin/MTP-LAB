#include <stdio.h>
int main()
{
	char msg[256], zero[16];
	int i, *pont;
	for(i=0; i<16; i++)
		zero[i] = '0';
	printf("\nDigite uma mensagem: ");
	fgets(msg, 256, stdin);
	pont=(int*)&msg;
	printf("(int): ");
	for(i=0; i<4; i++)
		printf("%d ", *(pont+i));
	printf("; (hex): ");
	for(i=0; i<4; i++)
		printf("%X ", *(pont+i));
	return 0;
}