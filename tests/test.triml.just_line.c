#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "text1";

int test()
{
	triml(a,5);

	if(strcmp(a, "text1") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string 'text1', output expected 'text1' but was '%s'", a);
}
