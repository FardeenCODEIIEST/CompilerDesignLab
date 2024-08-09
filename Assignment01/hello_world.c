#include <stdio.h>

/*
****

  * This is a multi-line comment

***
*/
#define HELLO "Hello there!"

struct point{
	int x;
	int y;
	unsigned int z;
};

int main()
{
	int a = 10, b = 10;
	int c = a ^ b;

//	int 14ch = 3%4;

	a ^= c;

	a &= b;

	a |= c;

	int g = a && b;
	int h = a || b;

	int pq = !a;

	if (pq != a)
		;

	if (pq == a)
		;

	int dq = ~a;

	int d = c * b;

	int qd = 1e9;
	float fd = 23.45;

	float fed = 23.45e10;

	printf("The sum is %d\n", c);
	printf("%s\n", HELLO);

	return 0;
}
