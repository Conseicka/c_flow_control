#include <stdio.h>

int n = 20;

int main()
{
    do
    {
        printf("n es igual a %d \n", n);
        n -= 1;
    } while (n > 10);
    printf("hemos salido del bucle por que n es igual menor que 10");
    return 0;
}