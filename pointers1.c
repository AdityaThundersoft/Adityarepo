#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("After swapping a=%d b=%d",a,b);
}

int main()
{
    int a=5,b=6;
    printf("Before swapping a=%d b=%d",a,b);
    swap(&a,&b);
    return 0;
}