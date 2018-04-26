#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int x=1, limite, x1, x2, x3, soma=0, d, pont, pfinal =0;
	while(x<=3)
	{
		printf("\n\nRODADA %d", x);
		printf("\nDigite o limite: ");
		scanf("%d", &limite);
		
		if(limite <= 11)
			{
			x1=rand()%limite+1;
			printf("\nNumero sorteado: %d", x1);
			x2=rand()%limite+1;
			printf("\nNumero sorteado: %d", x2);
			x3=rand()%limite+1;
			printf("\nNumero sorteado: %d", x3);
			soma = x1 +x2 + x3;	
			pont= 11- soma;
			printf("\nTotal de pontos na rodada: %d", pont);
			}
		if(limite>11)
			{
			x1=rand()%limite+1;
			printf("\nNumero sorteado: %d", x1);
			x2=rand()%limite+1;
			printf("\nNumero sorteado: %d", x2);
			x3=rand()%limite+1;
			printf("\nNumero sorteado: %d", x3);
			soma = x1 +x2 + x3;	
			d=limite-10;
			if(soma > limite)
				{
				pont = d*(soma-limite);
				printf("\nTotal de pontos na rodada: %d", pont);
				}	
			if(soma <= limite)
				{
				pont = (limite - soma)/d + 1;
				printf("\nTotal de pontos na rodada: %d", pont);
				}
			}
			pfinal = pfinal+pont;
			x++;
	}
	printf("\n\nPONTO TOTAL: %d", pfinal);
	return 0;
}