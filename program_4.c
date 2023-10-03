#include<stdio.h>
#include<stdlib.h>
int main(){
// create an two random 3x3 matrices
int a[3][3], b[3][3] , c[3][3];

// randomize a and b
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        a[i][j] = rand();
        b[i][j] = rand();
    }
}

// make C a null matrix
for(int i=0;i<3;i++) {
    for (int j = 0; j < 3; j++) {
        c[i][j] = 0;
    }
}

// matrix multiplication
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        c[i][j] += a[i][j] * b[j][i];
    }
}



}