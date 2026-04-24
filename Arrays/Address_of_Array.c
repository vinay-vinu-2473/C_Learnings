#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Address of the Array: %p\n", arr);
    printf("Address of the First Element: %p\n", &arr[0]);
    return 0;
}