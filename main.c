#include <stdio.h>

// 1 QUESTION //

void fun(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swiping :\n");
    printf("%d\n",x);
    printf("%d",y);
}
int main()
{
    printf("before swiping :\n");
    int x=5;
    int y=3;
    printf("%d\n",x);
    printf("%d\n",y);
    fun(x,y);
}