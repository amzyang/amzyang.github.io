#include <stdio.h>

	void
foo(void)
{
	int a = 10;
	static int sa = 10;
	a += 5;
	sa += 5;

	printf("a = %d, sa = %d\n", a, sa);
}

	int
main(int argc, char **argv)
{
	int i;
	for (i = 0; i < 10; ++i)
		foo();
	return 0;
}
