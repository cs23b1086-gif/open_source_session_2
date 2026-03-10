/*
Hint for students:
This function is doing too many tasks:
->input
->calculation
->printing
*/
#include <stdio.h>

int marks[100];
int noOfStudents;

void input ();
void averageMarks();
void minAndMaxMarks ();
 
//main function
int main()
{
    input();
    averageMarks();
    minAndMaxMarks();

    return 0;
}


//input function
void input (){

     printf("Enter number of students: ");
    scanf("%d", &noOfStudents);

    for(int i = 0; i < noOfStudents ; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

}


//average marks function
void averageMarks(){

    int sum = 0;
 
    for(int i = 0; i < noOfStudents ; i++)
    {
        sum = sum + marks[i];
    }

    int avg = sum / noOfStudents;

    printf("Average marks = %d\n", avg);

}

//minAndMax function
void minAndMaxMarks (){

    int max = marks[0];
    int min = marks[0];

    for(int i = 1; i < noOfStudents ; i++)
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

    printf("Max Marks: %d\nMin Marks: %d", max, min);

}

