#include<stdio.h>

// Addition Function with two arguments and return type as integer
int ADDITION(int a, int b){
    return a+b;
}

// Subtraction Function with two arguments and return type as integer
int SUBTRACTION(int a, int b){
    return a-b;
}

// Function pointer declaration
int (*FUNCTION_POINTER)(int, int);

// Function with 2 arguments
void FUNCTION_WITH_ARGUMENTS(int a, int b){
    int c,d;

    c=ADDITION(a,b); // Calling the ADDITION function and storing the result in variable c
    d=SUBTRACTION(a,b); // Calling the SUBTRACTION function and storing the result in variable d

    printf("ADDITION: %d\n",c);
    printf("SUBTRACTION: %d\n",d);
}

// Function with function pointer as argument
void FUNCTION_WITH_FUNCTION_POINTER(int a, int b){

    // Assigning the address of the ADDITION function to the function pointer
    FUNCTION_POINTER=&ADDITION;
    int c, d;
    c=FUNCTION_POINTER(a,b); // Calling the function pointed by FUNCTION_POINTER (which is ADDITION) and storing the result in variable c
    printf("ADDITION: %d\n",c);

    // Assigning the address of the SUBTRACTION function to the function pointer
    FUNCTION_POINTER=&SUBTRACTION;
    d=FUNCTION_POINTER(a,b); // Calling the function pointed by FUNCTION_POINTER (which is SUBTRACTION) and storing the result in variable d
    printf("SUBTRACTION: %d\n",d);
}

int main(){
    int a, b;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    // Calling the function with arguments
    FUNCTION_WITH_ARGUMENTS(a,b);

    // Calling the function with function pointer as argument
    FUNCTION_WITH_FUNCTION_POINTER(a,b);

    return 0;
}