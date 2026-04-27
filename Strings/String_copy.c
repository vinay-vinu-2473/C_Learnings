#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter a string: ");
    gets(str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[strlen(str1)]='\0';
    printf("Copied string is: %s",str2);
    return 0;
}