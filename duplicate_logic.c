/*
Hint for students

The program has duplicate logic in two functions.
Refactor the code to avoid repetition.
*/
#include <stdio.h>

int find(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(min < arr[i])
        {
            min = arr[i];
    }
}
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
int main()
{
    int arr[5] = {60, 70, 80, 90, 50};
    return 0;
}
