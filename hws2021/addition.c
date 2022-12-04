#include <stdio.h>

int main()
{
    int x, y, result;
    // float result;
    // printf("Zadej cele cislo x, pote zmackni Enter:\n");
    scanf("%d %d", &x, &y);

    // printf("Zadej cele cislo y, pote zmackni Enter:\n");
    // scanf("%d", &y);
    
    result = x + y;

    // printf("x * y = %f\n", result);
    printf("%d", result);

    return 0;
}
