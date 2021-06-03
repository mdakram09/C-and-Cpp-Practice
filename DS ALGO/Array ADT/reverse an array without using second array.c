/**
 * C program to reverse an array without using second array
 */

#include <stdio.h>
#define MAX_SIZE 100      // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    int temp; // Used for swapping 

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while(revIndex < arrIndex)
    {
        /* Copy value from original array to reverse array */
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;
        
        revIndex++;
        arrIndex--;
    }

    /*
     * Print reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}