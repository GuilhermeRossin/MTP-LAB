#include <stdio.h>
void inverte(char *string){
   if(*string){
	  inverte(string+1);
	  putchar(*string);
   }}
int main(){
   char msg[256];
   printf("Digite a mensagem: ");
   fgets(msg, 256, stdin);
   inverte(msg);
   return 0;}