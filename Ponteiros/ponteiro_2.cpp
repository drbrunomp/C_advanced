#include <stdio.h>
main()
{
	int num, q=1;
	int *p;
	
	num=100;
	p = &num;
	q = *p;
	
	printf("%d",q);
}

