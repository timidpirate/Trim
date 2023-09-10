#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "   ";

int test()
{
	triml(a,3);

	if(strcmp(a, "") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string '   ', output expected '' but was '%s'", a);
}
