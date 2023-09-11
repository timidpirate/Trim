#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern int test();
extern void fail_message();

int main(int argc, char **argv)
{
	// Run test.
	if(test())
	{
		printf("\x1b[31m fail\n\t");
		fail_message();
		printf("\x1b[m\n");
		return 1;
	}

	printf("\x1b[32m pass\x1b[m\n");
	return 0;
}
