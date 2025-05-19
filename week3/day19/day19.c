//day19 of learning c
//name: Leigh
//date: 05/02/2025

// find the largest of the 2 numbers

#include <stdio.h>
#include <stdlib.h>

int main(){

    char input[10];
    int a, b;
    int count = 0;

    while(count < 2){

        printf("\nType 'q' to exit\n%d. Enter number: ", count+1);
        scanf("%s", input);

        if(input[0] == 'q' || input[0] == 'Q'){
            break;
        }

        int num = atoi(input);

        if(count == 0){
            a = num;
        }
        else if(count == 1){
            b = num;
        }

        count++;
    }

    printf("\nYou entered:\n%d, %d\n", a, b);

    if(a > b){
        printf("%d is greater than %d", a,b);
    }
    else{
        printf("%d is less than %d", a,b);
    }


    return 0;

}
