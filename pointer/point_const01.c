#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int j = 10;

	int *const p = &i;
	i = 101;

	printf("%d\n",*p);

	exit(0);
}
