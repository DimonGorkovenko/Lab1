#include <stdio.h>

int main()
{
    float a, b, c, S, V;
    printf("Hello, World!\nEnter 3 parallelepiped edges:\n");
    scanf_s("%f", &a);
    scanf_s("%f", &b);
    scanf_s("%f", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Incorrect numbers");
        return 0;
    }
    else {
        V = a * b * c;
        printf("The space is equal %.3f\n", V);
        S = 2 * a * b + 2 * a * c + 2 * b * c;
        printf("Full area is equal %.3f", S);
        return 0;
    }
}

