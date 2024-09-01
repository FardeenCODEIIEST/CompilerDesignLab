#include <stdio.h>

typedef union person
{
    int age;
    int income;
} person;

int *add(int a, int b)
{
    int c = a + b;
    return &c;
}

enum week
{
    MONDAY,
    TUESDAY,
    WDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void hello()
{
    printf("Hello there!!!\n");
}

int global_a = 1e9 + 7;

int main(int argc, char **argv)
{
    enum week day;

    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int address = &num1;

    printf("%d %d", sizeof(int), sizeof(num1));

    int arr[10];

    float fp = 23.78;

    unsigned short num = 20;

    int status = num1 >= 18 ? 1 : 0;

    switch (num1)
    {
    case 1:
        printf("It is number 1\n");
    case 2:
        printf("It is number 2\n");
        break;
    default:
        printf("It is not 1 or 2\n");
    }

    int sum = add(num1, num2);

    int debt = (num1 + num2) * (num1 + sum) * ((num1 / sum) - (num2 / sum));

    int i = 0;

    while (i < 10)
    {
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (i == 8)
        {
            break;
        }
        printf("%d", i);
    }

    printf("The sum is %d", sum);

    return 0;
}
