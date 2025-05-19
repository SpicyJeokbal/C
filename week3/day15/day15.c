//day15 of learning c
//name: Leigh
//date: 28/04/2025

//Write a program to check if a number is positive

#include <stdio.h>

int main(){

    int x, result;

    printf("Enter a number: ");
    result = scanf("%d", &x);

    if(result != 1){
        printf("not a number");
    }
    else if (x > 0){
        printf("%d is positive", x);
    }
    else if (x < 0){
        printf("%d is negative ", x);
    }
    else{
        printf("%d is a zero", x);
    }
    


    return 0;
}