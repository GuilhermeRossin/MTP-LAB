#include <stdio.h>
int main()
{
	int i, vog=0, cons=0, dig=0, esp=0, v_cons = 0, let=0;
	char msg[256];
	printf("Digite a mensagem: ");
	fgets(msg,256,stdin);
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i]>96)
			msg[i] -= 32;
	}
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i] >= 'A' && msg[i] <= 'Z'){
			let++;
			cons++;
		}	
		if(msg[i] == 'A' || msg[i] == 'E' || msg[i] == 'I' || msg[i] == 'O' || msg[i] == 'U')
			cons--;
		if(msg[i] == '1' || msg[i] == '2' || msg[i] == '3' || msg[i] == '4' || msg[i] == '5' || msg[i] == '6' || msg[i] == '7' || msg[i] == '8' || msg[i] == '9' || msg[i] == '0')
			dig++;
		if(msg[i] == ' ')
			esp++;
	}
	vog = let - cons;
	printf("\nVogais: %d \nConsoantes: %d \nDigitos: %d \nEspaços: %d", vog, cons, dig, esp);
	return 0;
}
