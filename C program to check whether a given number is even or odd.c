#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    //True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
