#include<stdio.h>
#include<stdbool.h>
enum direction {up,down,left=10,right};
int main()
{
    printf("\nup: %d", up);
    printf("\ndown: %d", down);
    printf("\nleft: %d", left);
    printf("\nright: %d", right);
    return 0;
}