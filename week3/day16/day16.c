//day16 of learning c
//name: Leigh
//date: 05/02/2025

//Check if number is odd or even

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char input[10];  

    while (1) {
        printf("Type 'q' to exit\nEnter a whole number: ");
        scanf("%s", input);  

        if (input[0] == 'q' || input[0] == 'Q') {
            break;
        }

        int num = atoi(input);  // convert string to integer
        //int num = (int) input will not work cuz it will convert it to the equivalent of 5 in ASCII

        if (num % 2 == 0) {
            printf("%d is an even number\n", num);
        } else {
            printf("%d is an odd number\n", num);
        }
    }

    return 0;

}