#include <stdio.h>
/**
 * first - executed before main
 */
void __attribute__((contructor)) first(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
