#include <stdio.h>
int main()
{
	char msg[256], nmsg[256];
	int i;
	printf("Digite a mensagem: ");
	fgets(msg,256,stdin);
	for(i=0; msg[i] != '\0'; i++){
		if(msg[i]>= 'a' && msg[i]>= 'z' || msg[i]>= 'A' && msg[i]>= 'A')
		{
			if(msg[i] == 'A' || msg[i] == 'a')
				nmsg[i] = 'N';
			if(msg[i] == 'B' || msg[i] == 'b')
				nmsg[i] = 'O';
			if(msg[i] == 'C' || msg[i] == 'c')
				nmsg[i] = 'P';
			if(msg[i] == 'D' || msg[i] == 'd')
				nmsg[i] = 'Q';
			if(msg[i] == 'E' || msg[i] == 'e')
				nmsg[i] = 'R';
			if(msg[i] == 'F' || msg[i] == 'f')
				nmsg[i] = 'S';
			if(msg[i] == 'G' || msg[i] == 'g')
				nmsg[i] = 'T';
			if(msg[i] == 'H' || msg[i] == 'h')
				nmsg[i] = 'U';
			if(msg[i] == 'I' || msg[i] == 'i')
				nmsg[i] = 'V';
			if(msg[i] == 'J' || msg[i] == 'j')
				nmsg[i] = 'W';
			if(msg[i] == 'K' || msg[i] == 'k')
				nmsg[i] = 'X';
			if(msg[i] == 'L' || msg[i] == 'l')
				nmsg[i] = 'Y';
			if(msg[i] == 'M' || msg[i] == 'z')
				nmsg[i] = 'Z';
			if(msg[i] == 'N' || msg[i] == 'n')
				nmsg[i] = 'A';
			if(msg[i] == 'O' || msg[i] == 'o')
				nmsg[i] = 'B';
			if(msg[i] == 'P' || msg[i] == 'p')
				nmsg[i] = 'C';
			if(msg[i] == 'Q' || msg[i] == 'q')
				nmsg[i] = 'D';
			if(msg[i] == 'R' || msg[i] == 'r')
				nmsg[i] = 'E';
			if(msg[i] == 'S' || msg[i] == 's')
				nmsg[i] = 'F';
			if(msg[i] == 'T' || msg[i] == 't')
				nmsg[i] = 'G';
			if(msg[i] == 'U' || msg[i] == 'u')
				nmsg[i] = 'H';
			if(msg[i] == 'V' || msg[i] == 'v')
				nmsg[i] = 'I';
			if(msg[i] == 'W' || msg[i] == 'w')
				nmsg[i] = 'J';
			if(msg[i] == 'X' || msg[i] == 'x')
				nmsg[i] = 'K';
			if(msg[i] == 'Y' || msg[i] == 'y')
				nmsg[i] = 'L';
			if(msg[i] == 'Z' || msg[i] == 'z')
				nmsg[i] = 'M';	
		}
		else
			nmsg[i] = msg[i];
	}
	printf("\nMensagem em ROT13: %s", nmsg);
	return 0;
}