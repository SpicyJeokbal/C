//day18 of learning c
//name: Leigh
//date: 05/02/2025

//Take age and check if eligible to vote (>=18)

#include <stdio.h>
#include <stdlib.h>

int main(){

    char input[10];

    while(1){

        printf("\nType q to exit\nEnter age: ");
        scanf("%s", input);

        if(input[0] == 'q' || input[0] == 'Q'){
            break;
        }

        int age = atoi(input);

        if (age >= 18){
            printf("You are eligible to vote");
        }
        else{
            printf("You are not eligible to vote yet");
        }


    }

    return 0;
}