#include <string.h>
#include <stdio.h>
#include "../src/trim.h"

char a1[] = "  \ntext1 \n \n ";
char a2[] = " \t \ntext2 \n \t \n ";
char a3[] = "\t  \ntext3 \n \t \n ";

int test()
{
	triml(a1,13);
	triml(a2,16);
	triml(a3,16);

	if(strcmp(a3, "text3") != 0)	return 1;

	freetrim();
	return 0;
}

void fail_message()
{
	printf("input string '\\t  \\ntext3 \\n \\t \\n ', output expected 'text3' but was '%s'", a3);
}
