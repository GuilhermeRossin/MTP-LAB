#include <stdio.h>
int main()
{
	int vetor[] = {0,1,2,4,8,16,1025};
	int x=0, i; 
	unsigned char *anali;
	anali = (unsigned char *)&vetor;
	for(i=0; i<sizeof(vetor); i++){
		if(*(anali +i)== 0x00)
			x++;
	}
	printf("Total: %d", x);
	return 0;
}