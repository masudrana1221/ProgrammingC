
// integer multiple numbers

#include<stdio.h>

int main()
{
    int a, b , c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a =%d, b =%d, c =%d", a, b, c);
    return 0;
}

// floating multiple numbers

#include<stdio.h>

int main()
{
    float chinese, math, computer, overview;

    scanf("%f %f %f %f", &chinese, &math, &computer, &overview);
    printf("Chinese = %.2f, Math = %.2f, Computer =%.2f, OverView = %.2f", chinese, math, computer, overview);

    return 0;
}

// Charecter multiple input numbers 

#include<stdio.h>

int main()
{
    char chinese, math, comp, over;

    scanf("%c %c %c %c", &chinese, &math, &comp, &over);

    // printf("Chinese 01 = %c, Ad. mathmatices = %c, Computer = %c, Chinese Overview = %c", chinese, math, comp, over);

    printf("Chinese 01 = %c \n", chinese);
    printf("Advace Mathematices = %c \n", math);
    printf("Introduction to Computer = %c \n", comp);
    printf("China Overview = %c", over);

    return 0;
}