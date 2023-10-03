#include<stdio.h>
int main(){
    float temp_c,temp_f;
    printf("Temperature in Centigrade: ");
    scanf("%f",&temp_c);
    temp_f = (temp_c * (9/5)) + 32;
    printf("Temperature in Fahrenheit is: %f",temp_f);
    return 0;
}