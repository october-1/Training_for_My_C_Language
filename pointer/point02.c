#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3];
	int *p = a;
	int i;

	for(i = 0;i < sizeof(a)/sizeof(*a);i++)
		printf("%p --> %i\n",a+i,*(a+i));

	for(i = 0;i < sizeof(a)/sizeof(*a);i++)
		scanf("%d",p++);

	for(i = 0;i < sizeof(a)/sizeof(*a);i++)
		printf("%p --> %i\n",a+i,*(a+i));

	p = a;

	for(i = 0;i < sizeof(a)/sizeof(*a);i++,p++)
		printf("%p --> %i\n",p,*p);

	exit(0);
}
