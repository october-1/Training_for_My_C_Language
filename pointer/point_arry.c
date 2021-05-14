#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *name[5] = {"ene","jwo","yhree","bour","five"};
	int i,j,k;
	char *temp;

	for(i = 0;i < 5 - 1;i++)
	{
		k = i;
		for(j = i+1;j < 5;j++)
		{
			if(strcmp(name[i],name[j])>0)
				k = j;
		}
		if(k != i)
		{
			temp = name[k];
			name[k] = name[i];
			name[i] = temp;
		}
		
	}

	for(i = 0;i < 5;i++)
		puts(name[i]);

	exit(0);
}
