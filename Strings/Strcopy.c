#include<stdio.h>
int main()
{
    char src[100],dest[100];
    printf("Enter a string: ");
    gets(src);

    strcpy(dest,src);
    printf("Copied string is: %s", dest);
    return 0;  
}