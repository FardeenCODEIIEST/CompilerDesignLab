#include <stdio.h>

//	This is a comment

/*
 * This is a multine comment
 *
 */

#define HELLO "Hello there!"
int main()
{
    int a = 10, b = 10;
    int c = a ^ b;

    char dh = 'p';

    int 65gf = 56+9;	

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
