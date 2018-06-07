#include <stdio.h>
int soma_vet(int v[], int n){
	 if (n == 0) return 0;
   else {
      int s;
      s = soma_vet (v, n-1);
      if (v[n-1] > 0) s += v[n-1];
      return (s);}}
int main(){
	int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}; 
	int n = sizeof(a)/sizeof(int); 
	printf("\nSoma: %d", soma_vet(a, n));
	return 0;}