#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 1st number\n");

    scanf("%d",&a);
printf("Enter 2nd number\n");
scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;

    printf("1st %d\n",a);
    printf("2nd %d\n",b);


}
