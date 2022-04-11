///Design two user-defined function to input and show (3x3) matrix element.Apply these function with a C program to confirm they are working.


#include <stdio.h>

int input(int a[5][5]);
int show(int a[5][5]);

void main()
{
    int a[5][5],b[5][5];
    printf("Enter matrix A value: \n");
    input(a);
    printf("Enter Matrix B value: \n");
    input(b);
    printf("Matrix A value: \n");
    show(a);
    printf("Matrix B value: \n");
    show(b);
        
}

int input(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    return a;
}

int show(int a[5][5]){
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return a;
}
© 2022 GitHub, Inc.
