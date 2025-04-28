//day9 of learning c
//name: Leigh
//date: 28/04/2025

//Take two integers, add them, print the result


#include <stdio.h>
#include <string.h>

int main(){

    int x,y;
    char fname[20], lname[20];
    float a,b;

    //int
    printf("Enter the 1st number: ");
    scanf("%d", &x);

    printf("Enter the 2nd number: ");
    scanf("%d", &y);

    printf("%d \n", x + y);

    //string
    printf("Enter your first name: ");
    scanf("%s", &fname);
    
    printf("Enter your last name: ");
    scanf("%s", &lname);

    strcat(fname, lname);

    printf("%s \n", fname);

    //float
    printf("Enter a: ");
    scanf("%f", &a);
    
    printf("Enter b: ");
    scanf("%f", &b);

    printf("%.4f \n", a+b);
    


    return 0;


}