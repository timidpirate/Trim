#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a1[] = "  \ntext1 \n \n ";
char a2[] = " \t \ntext2 \n \t \n ";

int test()
{
	triml(a1,13);
	triml(a2,16);

	if(strcmp(a2, "text2") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string ' \\t \\ntext2 \\n \\t \\n ', output expected 'text2' but was '%s'", a2);
}
