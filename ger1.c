#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i, x=1, estado =0;
	printf("Digite o numero: ");
	scanf("%d", &num);
	for(i=0; i<=10; i++)
	{
		if(num % x == 0)
			estado = 1;
		else
			estado = 0;
		x++;	
	}
	if(estado == 1)
		printf("\nNao e primo!");
	else
		printf("E primo!");
	return 0;	
}