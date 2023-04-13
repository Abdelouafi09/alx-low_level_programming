#include <stdio.h>
int add(int a, int b)
{
	a += b;
	return (a);
}
int add1(int *a, int *b)
{
	*a += *b;
	return (*a);
}
int main(void)
{
	int b1, b2, a, b, *c, *d;

	a = 2;
	b = 5;
	b1 = add(a, b);
	printf("without using pointer result = %d , a = %d , b = %d\n", b1, a, b);
	c = &a;
	d = &b;
	b2 = add1(c, d);
	printf("using pointer result = %d , a = %d , b = %d\n", b2, a, b);
	return (0);
}
