#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3] = {1,2,3};

	int *p = a;

	int i = 0;

	while(i < sizeof(a)/sizeof(*a))
	{
		printf("%p --> %i\n",p+i,p[i]);
		i++;
	}
	exit(0);
}
