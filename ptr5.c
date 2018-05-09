#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(0));
	int vet_ale[1000], num, i, cont=0;
	unsigned char *pont, *inicial , *final;
	
	printf("Digite um numero entre 0 e 225: ");
	scanf("%d", &num);
	
	for(i=0; i<1000; i++){
		vet_ale[i] = rand()%num+1;
	}
	
	pont = (unsigned char*)&vet_ale;
	inicial = (unsigned char*)&vet_ale[0];
	
	printf("Os bytes dos seguintes enderecos:");
	
	for(i=0; i<sizeof(vet_ale); i++){
		if(*(pont+i) == num){
			printf("\n0x%p : %d", &vet_ale[i], num );
			cont++;
		}
	}
	
	/*if(i != sizeof(vet_ale))
		i++;*/
		
	final = (unsigned char*)&vet_ale[i];
	
	printf("\nEsses %d bytes sao iguais a %d e estao localizados entre o endereco: %p ate o %p na memoria.", cont, num, &inicial, &final);
	return 0;
}