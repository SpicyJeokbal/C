
//create a 2d matrix and allocate a memory to it

#include <stdio.h>
#include <stdlib.h>

int main(){

    // {{1,2,3},     becomes {1,2,3,4,5,6}
    //  {4,5,6}}
    int rows = 2, cols = 3;
    int *matrix = malloc(rows * cols * sizeof(int));

    if(matrix == NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter matrix elements: \n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i * cols + j]); // e.g I entered 0 so thats gonna be (i * cols + j) 0*3+0 = 0, so that means 1 will be placed on index 0
        }
    }

    printf("Matrix elements are: \n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }

    free(matrix);
    

    return 0;
}