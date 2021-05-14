#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int [3]){1,2,3};

	int i;
	
	for(i = 0;i < 3;i++)
		printf("%d\t",*(p+i));
	puts("");

	exit(0);
}
