#include <stdio.h>
#include <stdlib.h>


int main(){

    int *ptr;
    ptr = calloc(4, sizeof(int));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    for (int i = 0; i < 4; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);




    return 0;
}