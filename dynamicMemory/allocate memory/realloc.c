

#include <stdlib.h>
#include <stdio.h>

// resize existing memory block

int main(){

    //void *realloc(void *ptr, size_t new_size);
    //realloc return NULL pointer if it is not able to allocate memory
    int n = 10, m = 15;
    int *ptr = malloc(n * sizeof(int));

    //always include error checking when allocating memory
    if(ptr == NULL){
        printf("allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, m * sizeof(int));
    printf("Realloc\n");
    for(int i = 0; i < m; i++){
        ptr[i] = i + 1;
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}