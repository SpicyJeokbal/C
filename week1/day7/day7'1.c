//day7 of learning c
//name: Leigh
//date: 27/04/2025

//convert data types


#include <stdio.h>



int main(){

    //float to int
    // it rounds down the float
    float a = 3.97;
    int b = (int) a;
    printf("float to int: %d \n", b);

    //int to float
    int c = 10;
    float d = (float) c;
    printf("int to float: %.2f \n", d);

    //int to char
    //it converts the int to ascii
    int e = 65;
    char f = (char) e;
    printf("int to char: %c \n", f);

    //char to int
    char x = 70;
    int y = (int) x;
    printf("char to int: %d \n", y);


    return 0;
}
