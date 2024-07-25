#include <stdio.h>
main()
{
int a;
int *b;   //ponteiro
   
a=10;
b=&a;	   //retorna posição de memória para armazenamento

printf("\n%d\n",b);
printf("\n%d\n",*b);   //retorna conteúdo do ponteiro (posição de memória)
}

