/*
Hint for students

The program assumes all input is valid.
Add validation checks.*/

#include <stdio.h>

int main()
{
    int n;
    int marks[100];
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);
    if(n<0){
        printf("enter valid no of students");
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    int sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    if(n==0){
        for(i=0;i<=n;i++){
            int avg= marks[i];
        }
    }
    avg = sum / n;
    

    printf("Average marks: %d\n", avg);

    return 0;
}
