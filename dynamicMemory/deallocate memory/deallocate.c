

#include <stdio.h>
#include <stdlib.h>

int main(){

    /*     It is considered a good practice to set a pointer to NULL after freeing memory so that you cannot accidentally continue using it.
        If you continue using memory after it has been freed you may corrupt data from other programs or even another part of your own program.
    */

    //for this code gives the space back to the system even though 20 is still using it. 20 is still physically in the memory.
    //If you try to access the memory after it has been freed, you will get a segmentation fault. That's why you should set the pointer to NULL after freeing it.
    // to not accidentally use it again unless you going to use malloc again.
    int *ptr;
    ptr = malloc(sizeof(*ptr));

    if(ptr == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }

    *ptr = 20;

    printf("Interger value: %d\n", *ptr);

    free(ptr);

    ptr = NULL;


    return 0;
}