

#include <stdio.h>
#include <stdlib.h>

void MyFunction(){
    int *arr;
    arr = malloc(sizeof(*arr));
}


int main(){

    /* A memory leak happens when dynamic memory is allocated but never freed.

    If a memory leak happens in a loop or in a function that is called frequently it 
    could take up too much memory and cause the computer to slow down.

    There is a risk of a memory leak if a pointer to dynamic memory is lost before the 
    memory can be freed. This can happen accidentally, so it is important to be careful 
    and keep track of pointers to dynamic memory. */

    int x = 5;
    int *ptr;
    ptr = calloc(2, sizeof(*ptr)); //8 bytes
    ptr = &x; // ptr now points to the address of x making the memory allocated by calloc can no longer be accessed

    MyFunction(); // the pointer only exists only inside of the function


    return 0;
}