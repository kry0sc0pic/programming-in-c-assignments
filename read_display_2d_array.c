#include<stdio.h>
void main(){
    int A[3][3];
    // user input
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("Enter Element [%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);

        }

    }

    printf("Regular Matrix\n");
    // display
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("%s","\n");

    }
    printf("Transpose Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j<3;j++){
            printf("%d ",A[j][i]);
        }
        printf("%s","\n");
    }
}