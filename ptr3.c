#include <stdio.h>
int main()
{
	int vetor[]={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}; 
	int x=0, i;
	unsigned char *anali;
	for(i=0; i<sizeof(vetor); i++){
		anali = (unsigned char *)&vetor;	
		if(anali[i] >= 0x01){
			x++;
			}	
		printf("\nBytes %d: %d", i+1, *anali);
	}
	printf("\n\nTotal investigados: %d", sizeof(vetor));
	printf("\n\nTotal com 1: %d", x);
	return 0;
}