//day2 of learning c
//name: Leigh
//date: 27/04/2025

//declare 2 string variables, 1 is hello, 1 is world, concatenate to say hello world

#include <stdio.h>
#include <string.h>

int main(){

    char x[10] = "Hello ";
    char y[10] = "World";

    strcat(x,y);    //adds y to x

    printf("%s\n", x);

    return 0;

}