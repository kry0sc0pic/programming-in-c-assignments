#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Number 1: ");
    scanf("%d",&a);
    printf("Enter Number 2: ");
    scanf("%d",&b);
    printf("Enter Number 3: ");
    scanf("%d",&c);
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("The Maximum Number is: %d",max);
    return 0;

}