#include <stdio.h>
#include <stdlib.h>

#if 0
	const int a;
	int const a;

	const int *p;
	int const *p;
	
	int *const p;
	
	const int *const p;
#endif
int main()
{
	int ii = 10,jj = 100;

	int const *p = &ii;

	p = &jj;

	printf("%d\n",*p);


	exit(0);
}
