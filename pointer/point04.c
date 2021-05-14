#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int i,j,s;
	int *p = &(a[0][0]);

	for(s = 0;s < sizeof(a)/sizeof(a[0][0]);s++)
		printf("%p-->%d\n",p+s,*(p+s));

	puts("");

	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%p-->%d\t",*(a+i)+j,*(*(a+i)+j));
		}
		printf("\n");
	}

	exit(0);
}
