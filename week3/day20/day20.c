//day20 of learning c
//name: Leigh
//date: 05/13/2025

//Find the smallest of three numbers

#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b,c;
    char input[10];

    for (int i = 0; i < 3; i++){

        printf("Enter a whole number: ");
        scanf("%s", &input);

        int num = atoi(input);

        if (i == 1){
            a = num;
        }
        else if (i == 2){
            b = num;
        }
        else{
            c = num;
        }

    }

    int smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("The smallest number is: %d", smallest);

    return 0;

}