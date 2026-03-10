#include <stdio.h>

int marks[100];
int noOfStudents = 0;

int averageMarks()
{
    int i;
    int sumOfMarks = 0;

    for(i = 0; i < noOfStudents; i++)
    {
        sumOfMarks = sumOfMarks + marks[i];
    }

    if(noOfStudents == 0)
    {
        return 0;
    }

    return sumOfMarks / noOfStudents;
}

int main()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &noOfStudents);

    for(i = 0; i < noOfStudents; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    int avg = averageMarks();

    printf("Average marks: %d\n", avg);

    return 0;
}
