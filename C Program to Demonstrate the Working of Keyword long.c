#include<stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    long double d;
    double e;
    printf("%zu bytes\n",sizeof(a));
    printf("%zu bytes\n",sizeof(b));
    printf("%zu bytes\n",sizeof(c));
    printf("%zu bytes\n",sizeof(d));
    printf("%zu bytes\n",sizeof(e));
}
