#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[2][3] = {1,2,3,4,5,6};
	int i,j;
	int *p = *a;
	int (*q)[3] = a;

	exit(0);
}
