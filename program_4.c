#include<stdio.h>
#include<stdlib.h>
int main() {
// create an two random 3x3 matrices
    int a[3][3], b[3][3], c[3][3] = {{0, 0, 0},
                                     {0, 0, 0},
                                     {0, 0, 0}};

// randomize a and b
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = rand();
            b[i][j] = rand();
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