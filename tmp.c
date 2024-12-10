#include<stdio.h>
int main()
{
    int x=3,y=6;
    x = x++ + y++;
    y = ++x + ++y;
    printf("x: %d, y: %d\n",x,y);
    return 0;
}