#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("%zu bytes\n",sizeof(intType));
    printf("%zu bytes\n",sizeof(floatType));
    printf("%zu bytes\n",sizeof(doubleType));
    printf("%zu bytes\n",sizeof(charType));
}
