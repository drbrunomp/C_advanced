#include<stdio.h>
#include<conio.h>

float pag, prest, parc;
char n_parc;

void calc()
{
	prest = pag/parc;
}

main()
{
	while(1)
	{
	printf("\n""valor da compra""\n");
	scanf("%f", &pag);
	printf("selecione o numero de parcelas""\n");
	printf("\n""1 - 1X");
	printf("\n""2 - 2X");
	printf("\n""3 - 3X");
	printf("\n""4 - 4X");
	printf("\n""5 - 5X""\n");
	scanf("%s", &n_parc);
	
	switch(n_parc)
	{
		case '1':
			parc=1;
			break;
		case '2':
			parc=2;
			break;
		case '3':
			parc=3;
			break;
		case '4':
			parc=4;
			break;
		case '5':
			parc=5;
			break;
		default:
			printf("parcela invalida""\n");
			goto fim;
			break;
	}
	calc();
	
	printf("\n""valor total: %f", pag);
	printf("\n""prestacoes: %f", prest);
	fim:
	getch();
}
}
