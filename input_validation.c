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
    //to avoid non integer inputs
    if(scanf("%d", &n) != 1){
        printf("Invalid input!\n");
        return 0;
}
     
    //we are doing this since the marks array has a limit of 100
    if(n<0 || n>100){
        printf("Too many students!!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter marks: ");
        //to avoid non integer inputs
        if((scanf("%d", &marks[i])) !=  1){
            printf("Invalid Input!");
            return 0;
        }

        //to avoid negative marks input
        if(marks[i] < 0){
        printf("Invalid Marks!!");  
        return  0;  
        }
    }

    int sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
 
    //to avoid the denominator to become 0
    if(n == 0){
        printf("Can't calculate average!");
        return 0;
    }
    int avg = sum / n;

    printf("Average marks: %d\n", avg);

    return 0;
}
