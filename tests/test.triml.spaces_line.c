#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "  \n text2";

int test()
{
	triml(a,9);

	if(strcmp(a, "text2") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string '  \\n text2', output expected 'text2' but was '%s'", a);
}
