#include <stdio.h>

typedef unsigned int uint32_t;

// Structure representing 5 values (like a fixed-size dataset)
typedef struct Values {
    uint32_t Value_at_index_1;
    uint32_t Value_at_index_2;
    uint32_t Value_at_index_3;
    uint32_t Value_at_index_4;
    uint32_t Value_at_index_5;
} Values_at_index;

typedef struct DataCollection {
    Values_at_index firstSet; // First dataset
    Values_at_index secondSet; // Second dataset
} Data;

// Structure holding multiple datasets
Data DataCollection = {
    .firstSet = {10,20,30,40,50}, // Initialize first set with specific values
    .secondSet = {11, 12, 13, 14, 15} // Initialize second set with specific values
};

#define ARRAYS_USING_STRUCTURES ((Data*)&DataCollection)

int main() {
    
    printf("Values of first set:\n");
    printf("%d %d %d %d %d\n",
           ARRAYS_USING_STRUCTURES->firstSet.Value_at_index_1,
           ARRAYS_USING_STRUCTURES->firstSet.Value_at_index_2,
           ARRAYS_USING_STRUCTURES->firstSet.Value_at_index_3,
           ARRAYS_USING_STRUCTURES->firstSet.Value_at_index_4,
           ARRAYS_USING_STRUCTURES->firstSet.Value_at_index_5);

    printf("Values of second set:\n");
    printf("%d %d %d %d %d\n",
           ARRAYS_USING_STRUCTURES->secondSet.Value_at_index_1,
           ARRAYS_USING_STRUCTURES->secondSet.Value_at_index_2,
           ARRAYS_USING_STRUCTURES->secondSet.Value_at_index_3,
           ARRAYS_USING_STRUCTURES->secondSet.Value_at_index_4,
           ARRAYS_USING_STRUCTURES->secondSet.Value_at_index_5);

    return 0;
}