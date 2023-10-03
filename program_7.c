#include<stdio.h>

int factorial(int num);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
}

int factorial(int num){
    if(num == 0) return 1;
    else return num * factorial(num - 1);
}