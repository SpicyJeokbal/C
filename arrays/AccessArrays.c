

#include <stdio.h>



int main(){

    int numbers[5] = {1,2,3,4,5};
    printf("%d\n\n", numbers[0]);

// ================================

    //change a value of an specific element on an array
    numbers[0] = 10;
    printf("%d\n", numbers[0]);

// ================================

    //loop through an array

    int len = sizeof(numbers) / sizeof(numbers[0]);

    printf("\n");
    for(int i = 0; i < len; i++){
        printf("%d\n", numbers[i]);
    }


// ================================

    //add a new element to an array
    int x[5];

    x[0]= 10;
    x[1] = 20;

    printf("\n");
    for(int i = 0; i < 2; i++){
        printf("%d\n", x[i]);
    }
    printf("\n");





    return 0;
}