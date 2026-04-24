#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    printf("Enter the index of the element you want to access (0-4): ");
    scanf("%d", &index);
    if (index >= 0 && index < 5) {
        printf("The element at index %d is: %d\n", index, arr[index]);
    } else {
        printf("Invalid index! Please enter a number between 0 and 4.\n");
    }
}   