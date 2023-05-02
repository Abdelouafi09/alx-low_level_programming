#include <stdio.h>
int main()
{
	int num=123;

	//A normal pointer pr2
	int *pr2;

	//This pointer pr2 is a double pointer
	int **pr1;

	/* Assigning the address of variable num to the
	 * pointer pr2
	 */
	pr2 = &num;

	/* Assigning the address of pointer pr2 to the
	 * pointer-to-pointer pr1
	 */
	pr1 = &pr2;

	/* Possible ways to find value of variable num*/
	printf(" Value of num is num: %d", num);
	printf("\n Value of num using pr2 is *pr2: %d", *pr2);
	printf("\n Value of num using pr1 is **pr1: %d", **pr1);

	/*Possible ways to find address of num*/
	printf("\n Address of num is &num: %p", &num);
	printf("\n Address of num using pr2 is pr2: %p", pr2);
	printf("\n Address of num using pr1 is *pr1: %p", *pr1);

	/*Find value of pointer*/
	printf("\n Value of Pointer pr2 is pr2: %p", pr2);
	printf("\n Value of Pointer pr2 using pr1 is *pr1: %p", *pr1);

	/*Ways to find address of pointer*/
	printf("\n Address of Pointer pr2 is &pr2:%p",&pr2);
	printf("\n Address of Pointer pr2 using pr1 is pr1:%p",pr1);

	/*Double pointer value and address*/
	printf("\n Value of Pointer pr1 is pr1:%p",pr1);
	printf("\n Address of Pointer pr1 is &pr1:%p\n",&pr1);

	return 0;
}
