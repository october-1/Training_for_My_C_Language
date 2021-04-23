#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *now()
{
	time_t t;
	time(&t);
	return asctime(localtime(&t));
}

/*---Call Main Program,log the ploic---*/

int main()
{
	char commit[80];
	char cmd[120];

	fgets(commit,80,stdin);
	sprintf(cmd,"echo '%s %s'>> README",commit,now());

	system(cmd);
	return 0;
}
