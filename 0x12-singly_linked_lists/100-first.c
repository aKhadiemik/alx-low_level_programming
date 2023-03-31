#include <stdio.h>

/**
 * first - function executed before main
 */

__attribute__((constructor))
void first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
