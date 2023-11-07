#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	int *pn,*pr;
	printf(" Enter the number :");
	scanf("%d",&num);

	pn=&num;
	pr=&rev;

    while (*pn>0){
        rem=(*pn)%10;
		*pr=(*pr * 10)+rem;
		*pn=(*pn)/10;
    }	
	printf(" Reverse of Number is : %d",*pr);
	return 0;	
}