#include <stdio.h>

int c = 10;

int main(int argc, char argv)
{
    argc++;
    int a = 10;
    int b = 20;

    for (int i = 0; i < 10; i++)
    {
        i--;
    }

    while (a < 1000)
    {
        a = a + b;
    }

    switch (b)
    {
    case 1:
        printf("This is one\n");
        break;
    case 2:
        printf("This is two\n");
        break;
    default:
        printf("This is not one or two\n");
        break;
    }

    int k = sizeof(d);

    return 0;
}