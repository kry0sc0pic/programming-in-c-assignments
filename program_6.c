#include<stdio.h>
#include<math.h>

void findRoots(int,int,int);

int main(){
    double a,b,c;
    printf("Enter a b c ");
    scanf("%lf %lf %lf",&a,&b,&c);
    findRoots(a,b,c);
    return 0;
}

void findRoots(int a,int b,int c){
    double D,r1,r2,real,imag;
    
    D = pow(b,2) - (4*a*c);

    if(D>0){
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("Root 1 = %lf\n",r1);
        printf("Root 2 = %lf\n",r2);
    } else if (D==0){
        r1 = r2 = (-b + sqrt(D)) / (2*a);
        printf("Root 1 = Root 2 = %lf",r1);
    } else {
        real = (-b) / (2*a);
        imag = sqrt(-D) / (2*a);

        printf("Root 1 = %.2lf + %.2lfi\n",real,imag);
        printf("Root 2 = %.2lf + %.2lfi\n",real,imag);
    }
    

}