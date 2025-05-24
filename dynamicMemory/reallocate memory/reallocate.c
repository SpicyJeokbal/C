


#include <stdio.h>
#include <stdlib.h>

int main(){

    //this code increases the size of the allocated memory
    int *ptr1, *ptr2, size;

    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d reallocated at address %p \n", size, ptr2);

    return 0;
}

