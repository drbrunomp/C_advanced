#include <stdio.h>
main()
{
int a;
int *b;   //ponteiro
   
a=10;
b=&a;	   //retorna posi��o de mem�ria para armazenamento

printf("\n%d\n",b);
printf("\n%d\n",*b);   //retorna conte�do do ponteiro (posi��o de mem�ria)
}

