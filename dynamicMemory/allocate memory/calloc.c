

#include <stdio.h>
#include <stdlib.h>

/* When to use calloc()
You want the memory to be initialized to zero right away.

You are creating arrays or buffers where all values should start at zero.

You want to avoid bugs caused by using uninitialized (garbage) data.

Example: counters, zeroed flags, or data structures where starting at zero matters. */

int main(){

    int *ptr = calloc(5,sizeof(int));

    //always include error checking when allocating memory
    if (ptr == NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    for (int i = 0; i < 5; i++){
        ptr[i] = i + 1;
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}