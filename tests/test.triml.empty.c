#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "";

int test()
{
	triml(a,0);

	if(strcmp(a, "") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input empty string, output expected '' but was '%s'", a);
}
