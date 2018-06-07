#include<stdio.h>
void compara(int a[],int b[], int m, int n){
	int i, k, p=0;
	int c[20];
	for(i=0; i<n; i++){
		for(k=0; k<m; k++){
			if( a[i] == b[k]){
				c[p] = a[i];
				p++;
			}	
		}
	}
	for(i=0; i<p; i++)
		printf("%d ", c[i]);}
int main(){
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}; 
	int n = sizeof(A)/sizeof(int); 
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29}; 
	int m = sizeof(B)/sizeof(int); 
	compara(A, B, m, n);
	return 0;}