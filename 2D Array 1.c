#include<stdio.h>
int main(){
    int rows=0,columns=0;
    printf("Enter the number of rows:\n ");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);
    int arr[rows][columns];
     for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the elements in rows:%d columns:%d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
        }
