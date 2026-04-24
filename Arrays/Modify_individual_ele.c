#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index, newValue;

    printf("Enter the index of the element you want to modify (0-4): ");
    scanf("%d", &index);
    printf("Enter the new value: ");
    scanf("%d", &newValue);
    if (index >= 0 && index < 5) {
        arr[index] = newValue;
        printf("Element at index %d has been modified to %d\n", index, newValue);
    } else {
        printf("Invalid index! Please enter a number between 0 and 4.\n");
    }
    return 0;
}