#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a[] = "  \ntext4 \n \n ";

int test()
{
	triml(a,13);

	if(strcmp(a, "text4") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string '  \\ntext4 \\n \\n ', output expected 'text4' but was '%s'", a);
}
