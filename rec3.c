#include <stdio.h>
int MDC(int u, int v){
	if(u==v || v==0) return u;
	if(u==0) return v;
	if((u%2)==0 && (v%2)!=0) return MDC(u/2, v);
	if((u%2)!=0 && (v%2)==0) return MDC(u, v/2);
	if((u%2)==0 && (v%2)==0) return 2*MDC(u/2, v/2);
	if(u>v) return MDC((u-v)/2, v);
	if(u<v) return MDC((v-u)/2, u);
}
int main(){
	int a, b, c, d, x, y,m;
	printf("\nDigite o valor de a: ");
	scanf("%d", &a);
	printf("\nDigite o valor de b: ");
	scanf("%d", &b);
	printf("\nDigite o valor de c: ");
	scanf("%d", &c);
	printf("\nDigite o valor de d: ");
	scanf("%d", &d);
	x= (d*a) + (b*c);
	y= b*d;
	m= MDC(x, y);
	printf("%d / %d", x/m, y/m);
	return 0;}