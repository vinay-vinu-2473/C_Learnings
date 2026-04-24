#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("Original array: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Modifying all elements of the array
    for(int i = 0; i < 5; i++)
    {
        arr[i] += 5; // Adding 5 to each element
    }
    printf("Modified array: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}