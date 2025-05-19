//day17 of learning c
//name: Leigh
//date: 05/02/2025

//check if number is divisible is 5

#include <stdio.h>
#include <stdlib.h>

int main(){

    char input[10];

    while(1){

        printf("\nEnter 'q' to exit\nEnter a number: ");
        scanf("%s", input);

        if (input[0] == 'q' || input[0] == 'Q'){
            break;
        }

        int num = atoi(input);

        if(num % 5 == 0){
            printf("%d is divisible by 5", num);
        }
        else{
            printf("%d is not divisible by 5", num);
        }

    }

    return 0;

}