#include <stdio.h>

int c = 10;

int main(int argc, char argv)
{
    int a = 10;
    int b = 20;

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

    {
        int k = 10;
        int p = 10;
    }

    unsigned int l = 10;

    {
        int k = 10;
        {
            int lmp = 90;
        }
        int p = 10;
    }

    int lmp = 100;

    return 0;
}