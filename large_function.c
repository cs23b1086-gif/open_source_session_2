/*
Hint for students:
This function is doing too many tasks:
->input
->calculation
->printing
*/
#include <stdio.h>

void processStudentData()
{
    int marks[100];
    int n;
    int i;
    int sum = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    int avg = sum / n;

    int max = marks[0];
    int min = marks[0];

    for(i = 1; i < n; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }

        if(marks[i] < min)
        {
            min = marks[i];
        }
    }

    printf("Average: %d\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

int main()
{
    processStudentData();
    return 0;
}
