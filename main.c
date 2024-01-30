#include <stdio.h>

// 1 QUESTION //

// void fun(int x, int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("after swiping :\n");
//     printf("%d\n",x);
//     printf("%d",y);
// }
// int main()
// {
//     printf("before swiping :\n");
//     int x=5;
//     int y=3;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     fun(x,y);

//     return 0;
// }

// 2 QUE //

int main()
{
    // int arr[] = {1, 3, 5, 7, 9};
    // int *p = &arr;
    // printf("%u %d\n", p, *p);
    // printf("%u %d\n", p+1, *(p+1));
    // printf("%u %d\n", p+2, *(p+2));
    // printf("%u %d\n", p+3, *(p+3));
    // printf("%u %d\n", p+4, *(p+4));

    int a=20;
    int *p=&a;
    int **p2=&p;
    printf("%u",p2,**p2);
    return 0;
}