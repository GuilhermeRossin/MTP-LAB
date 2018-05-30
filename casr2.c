#include  <stdlib.h>
#include  <time.h>
#include  <string.h>

void desenhar(int lin, int col){	
	char caract[] = "! @#$ %¨&*() _+ ¹²³£ ¢¬{}[]l- =|=§?";
	int a, b, i, j;
	srand(time(0));
	a = strlen(caract);
	for(i=0; i<lin; i++){	
		for(j=0; j<col; j++){	
			b = rand()%a;
			printf("%c", caract[b]);}
		printf("\n");}}
int  main(){	
	int desenho[256][256], lin, col;
	printf("Digite o numero de linhas: ");
	scanf("%d", &lin);
	printf("\nDigite o numer de colunas: ");
	scanf("%d", &col);
	desenhar(lin,col);
	return 0;}