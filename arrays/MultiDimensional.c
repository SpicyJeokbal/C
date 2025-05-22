

#include <stdio.h>



int main(){

    //int x[rows][columns] = {{}, {}};
    //int x[2][3] = {{1,2,3}, {4,5,6}} or {1,2,3,4,5,6}
    //int x[2][3 = 0    initializes all elements to 0

// ==========================================

    //access an element in a 2d array
    int matrix[2][3] = {{1,4,2},
                        {3,6,8}};

    printf("%d\n", matrix[0][2]);

// ==========================================

    //change elements in matrix
    matrix[0][1] = 5;

    printf("%d\n", matrix[0][1]);

// ==========================================
    //loop through a matrix
    int i,j;
    for(i = 0; i < 2;i++){
        for(j = 0; j < 3;j++){
            printf("%d", matrix[i][j]);
        }
    }

// ==========================================

    //assign elements to a 2x3 array
    printf("\n");
    int mat[2][3];

    printf("Enter Elements:\n");
    for(int x = 0;x < 2; x++){
        for(int y = 0; y < 3; y++){
            scanf("%d",&mat[x][y]);
        }
    }

    printf("Matrix:\n");
    for(int x = 0;x < 2; x++){
        for(int y = 0; y < 3; y++){
            printf("%d", mat[x][y]);
        }
        printf("\n");
    }


    return 0;
}