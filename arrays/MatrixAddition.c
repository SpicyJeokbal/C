


#include <stdio.h>


int main(){

    int A[2][3], B[2][3], sum[2][3];

    int i,j;

    //input elements for matrix A
    printf("Enter elements for A:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    //input elements for matrix B
    printf("Enter elements for B:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &B[i][j]);
        }
    }


    //sum of the 2 matrices
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    //display the sum of the 2 matrices
    printf("Sum of the 2 matrices:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }






    return 0;
}