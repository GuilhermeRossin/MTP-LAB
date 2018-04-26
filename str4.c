#include <stdio.h>
int main()
{
	char msg[256];
	int i;
	printf("Digite a mensagem: ");
	fgets(msg,256,stdin);
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i]>96)
			msg[i] -= 32;
	}
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i] == 'A')
			msg[i] = '4';
		if(msg[i] == 'E')
			msg[i] = '3';
		if(msg[i] == 'I')
			msg[i] = '1';
		if(msg[i] == 'O')
			msg[i] = '0';
		if(msg[i] == 'S')
			msg[i] = '5';
		if(msg[i] == 'G')
			msg[i] = '6';
	}
	printf("\n%s", msg);
	return 0;
}