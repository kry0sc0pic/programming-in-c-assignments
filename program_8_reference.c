#include<stdio.h>
void swap(int *, int *);

int main(){
    int a = 10;
    int b = 20;

    printf("Before Swap: a = %d, b = %d\n",a,b);

    swap(&a,&b);

    printf("After Swap: a = %d, b = %d\n"a,b);

    return 0;
}

void swap(int* a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
    printf("After Swap in swap fx a = %d, b = %d\n",*a,*b);
}