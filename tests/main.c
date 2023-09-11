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
		return 1;
	}

	return 0;
}
