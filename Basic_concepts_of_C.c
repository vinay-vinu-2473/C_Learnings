#include <stdio.h>

typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef struct student {
    uint32_t id;
    uint8_t name[20];
    uint32_t age;
} student;

typedef union data {
    uint32_t i;
    uint8_t c;
} data;

int main(){
    int arr[5];
    char str[6];
    uint32_t a;
    uint8_t b;
    
    printf("Enter the Integer variable: ");
    scanf("%u",&a);
    printf("Integer variable hold: %u\n", a);
    
    printf("Enter the char variable: ");
    scanf(" %c",&b);  
    printf("char variable hold: %c\n", b);
    
    printf("Enter the array:\n");
    for(int i=0; i<5; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The array:\n");
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
    
    printf("\nEnter the string: ");
    scanf("%s", str); 
    printf("The String: %s\n", str);
    
    student S1;
    student *ptr = &S1;
    printf("\nEnter Student details\n");
    printf("Enter the Id: ");
    scanf("%u",&ptr->id);
    printf("Enter the Name: ");
    scanf("%s",&ptr->name);
    printf("Enter the age: ");
    scanf("%u",&ptr->age);
    
    printf("\nthe Student details\n");
    printf("Id: %u\n",ptr->id);
    printf("Name: %s\n",ptr->name);
    printf("Age: %u\n",ptr->age);
    
    data d;
    printf("\nEnter the integer value: ");
    scanf("%d", &d.i);
    printf("Enter the charater value: ");
    scanf(" %c", &d.c);
    
    printf("\nUnion Storing int: %u\n",d.i);
    printf("Union Storing char: %c\n",d.c);

    
    return 0;
}