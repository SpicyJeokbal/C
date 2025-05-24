


#include <stdio.h>
#include <stdlib.h>




int main(){

    //Dynamic memory refers to memory allocated during runtime, 
    //as opposed to static or stack memory which is fixed at compile time

    int *ptr = malloc(5 * sizeof(int));
    free(ptr);

    return 0;
}