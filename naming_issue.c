#include <stdio.h>

int x[100];
int y = 0;

int f1()
{
    int i;
    int s = 0;

    for(i = 0; i < y; i++)
    {
        s = s + x[i];
    }

    if(y == 0)
    {
        return 0;
    }

    return s / y;
}

int main()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &y);

    for(i = 0; i < y; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &x[i]);
    }

    int avg = f1();

    printf("Average marks: %d\n", avg);

    return 0;
}
