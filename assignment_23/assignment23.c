#include <stdio.h>

/*
    INSTRUCTIONS:
    Create a simple structure of your choice. Mine will have a single member, an int called integer. Do not create an
        instance of the struct yet. Declare a pointer variable that points to your struct. This pointer doesn't actually
        point to anything yet because there are no instances of the first struct. Create an instance of the struct. Now
        initialize your pointer to point to the struct instance.
    Finally, assign values to the integer member of your original struct in three ways:
        assign a value by using standard dot-notation for your instance and then print the value
        assign a value by using standard dot-notation for the pointer initialized to the instance and then print the value
        assign a value by using the -> indirect membership operator between the pointer name and the structure member and then print the value
    Help found here: https://overiq.com/c-programming-101/pointer-to-a-structure-in-c/
 */

struct myStruct {
    int myInt;
};

void main(void) {
    struct myStruct *ptr;
    struct myStruct myStructObject;
    ptr = &myStructObject;

    printf("[*] Setting the value via the struct itself.\n");
    myStructObject.myInt = 6;
    printf("\t-> Value of struct: %d\n", myStructObject.myInt);

    printf("[*] Setting the value via the pointer instead of the struct.\n");
    (*ptr).myInt = 7;
    printf("\t-> Value via pointer: %d\n", (*ptr).myInt);

    printf("[*] Setting hte value via the arrow operator.\n");
    ptr->myInt = 8;
    printf("\t-> Value via the arrow: %d\n", ptr->myInt);
}