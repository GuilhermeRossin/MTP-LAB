#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define n 1000
#define m 1000

void preenche(float * elemento)
{
  scanf("%f", elemento);
}

void imprime(float **matriz, int N, int M)
{
  int i, j;
  printf("Matriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
}

void mat_transposta(float **matriz, int M, int N)
{
  int i, j;
  printf("Matriz Transposta %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", matriz[j][i], (j == M-1)? '\n':'\t');
}

int main() {
  int i, j;
  int N, M;
  float **matriz;
  printf("Digite a quantidade de vertices do poligono: ");
  scanf("%d", &N);
  M=N;
  matriz = calloc(N,sizeof(float*));
  for(i = 0; i < N; i++){
	matriz[i] = calloc(M,sizeof(float));
    for(j = 0; j < M; j++){
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    	}
    }
  imprime(matriz, N, M);
  mat_transposta(matriz, N, M);
  for(i = 0; i < N; i++)
	free(matriz[i]);
  free(matriz);
  return 0;
}