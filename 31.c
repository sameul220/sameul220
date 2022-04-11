///Write a program to print the upper elements of a Matrix from it's diagonal line.

#include <stdio.h>

void main(){
     int A[10][10], r, c, n;
    printf("How many row: \n");
    scanf("%d", &n);
    printf("Enter matrix A value: \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &A[r][c]);
        }
    }
    printf("The matrix of A are: \n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }
    printf("The upper elements of A matrix are: ");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
        {
           if(r<c){
                printf("%d\t", A[r][c]);
           }
        }
    }
}
