#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "text3 \n\n  ";

int test()
{
	trim(a);

	if(strcmp(a, "text3") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string 'text3 \\n\\n  ', output expected 'text3' but was '%s'", a);
}
