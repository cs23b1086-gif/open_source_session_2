/*
Hint for students

The program has duplicate logic in two functions.
Refactor the code to avoid repetition.
*/
#include <stdio.h>

void findMinAndMax (int arr[], int n, int *min, int *max);

int main()
{
    int arr[5] = {60, 70, 80, 90, 50};
    int min = arr[0];
    int max = arr[0];

    findMinAndMax(arr, 5, &min, &max);
     printf("Max: %d\nMin: %d", max, min);
     
    return 0;
}

//function to find both minimum and maximum elements
void findMinAndMax (int arr[], int n, int *min, int *max){
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }

        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
