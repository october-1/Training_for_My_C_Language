//     / __ \  (_)___ _____  ____ | |     / /__  (_)_  __/__  _____/ /_
//    / / / / / / __ `/ __ \/ __ `/ | /| / / _ \/ / / / / _ \/ ___/ __ \
//   / /_/ / / / /_/ / / / / /_/ /| |/ |/ /  __/ / / / /  __/ /__/ / / /
//   \___\_\/_/\__,_/_/ /_/\__, / |__/|__/\___/_/ /_/  \___/\___/_/ /_/
//                        /____/
#include<stdio.h>

#include<stdlib.h>

#define PME 1



static void logo_first_test(void);
int main(void)
{
	logo_first_test();

	int i = 1;

	int *p = &i;

	int **q = &p;

	printf("p = %p\n",p);

	exit(0);
}
void logo_first_test(void)
{
	
}

