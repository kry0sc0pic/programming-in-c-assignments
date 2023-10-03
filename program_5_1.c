#include<stdio.h>
int main(){
    int arr[10] = {1, 3, 3, 5, 89, 6, 7, 798 ,20, 10};
    int *ptr;
    int max = -999999999;
    for(ptr = arr;ptr < arr + 10;ptr++){
        if(*ptr > max){
            max = *ptr;
        }
    }
    printf("The Maximum value in the array is %d\n", max);
    return 0;
}