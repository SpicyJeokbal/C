


#include <stdio.h>
#include <stdlib.h>

/* When to use malloc()
You know how many bytes you want, and you don’t care about the initial contents.

You plan to immediately fill or overwrite the memory anyway.

You want a slight performance boost, because malloc() is usually a bit faster (doesn't zero memory).

Example: reading data from a file or user input right after allocation. */

int main(){


    //Allocates a block of uninitialized memory

    int n = 10;
    int *ptr = malloc(n * sizeof(int)); //allocates space for 10 ints

    //always include error checking when allocating memory
    if(ptr == NULL){
        printf("No more space\n");
        return 1;
    }


    for (int i = 0; i < n; i++){
        ptr[i] = i+ 1;
        printf("%d\n", ptr[i]);
    }


    free(ptr); //automatically removes the unused space


    return 0;
}