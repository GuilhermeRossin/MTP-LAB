#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    char * msg;
    int i=0;
    msg = (char*)malloc(1*sizeof(char));
    printf("\nEscreva a mensagem: ");
    while(1)
        {
            scanf("%c", msg+i);
            msg= (char *)realloc(msg, sizeof(char)*1);
            if(*(msg+i)==' ')
                break;
            i++;
        }
        *(msg+i)='\0';
            while(i>=0)
    {
        *(msg+i)= toupper(*(msg+i));
        i--;
    }
        printf("***%s",msg);
        free(msg);
    return EXIT_SUCCESS;
}