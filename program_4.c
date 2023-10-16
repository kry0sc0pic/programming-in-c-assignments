#include<stdio.h>
#include<stdlib.h>
int main() {
// create an the three matrices
    int a[3][3], b[3][3], c[3][3];

// take input from user for a and b
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter Element [%d][%d] of Matrix A: ", i, j);
            scanf("%d", &a[i][j]);

            printf("Enter Element [%d][%d] of Matrix B: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

// display a
    printf("Matrix A\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("%s", "\n");
    }

// display b
    printf("Matrix B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("%s", "\n");
    }

// matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][0] * b[j][0] + a[i][1] * b[j][1] + a[i][2] * b[j][2];
        }
    }

// display c
    printf("Matrix C\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("%s", "\n");

    }

    return 0;
}