#include <stdio.h>
void main(){
    int row, column, n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(row = 0; row<n; row++){
        for(column=n; column>row; column--){
            printf("%d ",row+1);
        }
        printf("\n");   
    }
}
