#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("input a number: ");
    scanf("%d", &num);
    if(num<0){ printf("negative");}
    else { printf("positive");}
    return 0;
}
