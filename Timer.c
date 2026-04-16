#include<stdio.h>
int Timer(int Period, int MaxCount)
{
    int count = 0;
    int flag = 0;
    int cycle = 0;

    while(cycle < Period){
        cycle++;

        if(count == (MaxCount-1)){
            flag++;
            count = 0;
        }
        else
        {
            count++;
        }
    }

    return flag;
}

int main()
{
    int Period = 240000000;
    int MaxCount = 256;
    int result;
    unsigned long long a = 1234567890;
    unsigned long long b;

    printf("ATUNTICATION\n");
    printf("Enter the Password: ");
    scanf("%llu", &b);
    if(a == b){
        printf("Authentication successful!\n");
        result = Timer(Period, MaxCount);
        printf("Flag: %d\n", result);
    }
    else{
        printf("Authentication failed!\n");
    }

    return 0;
}