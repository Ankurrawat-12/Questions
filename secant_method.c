#include <stdio.h>
#include <math.h>

float func(float x)
{
    return (x * x * x) + x - 1;
}

int main()
{
    float x1, x2, x3, error;
    printf("Enter X1 :- ");
    scanf("%f", &x1);
    printf("Enter X2 :- ");
    scanf("%f", &x2);
    printf("Enter the error :- ");
    scanf("%f", &error);
    // scanf("%f %f %f",&x1, &x2, &error);

    if (func(x1) * func(x2) >= 0)
    {
        printf("Can't Find roots in the given interval");
        return 0;
    }
    int iterations = 1;
    x3 = (func(x2) * x1 - func(x1) * x2) / (func(x2) - func(x1));
    while (fabs((x2 - x1) / x3) > error)
    {
        x1 = x2;
        x2 = x3;
        x3 = (func(x2) * x1 - func(x1) * x2) / (func(x2) - func(x1));
        printf("\nIteration:- %d  x0 :- %f",iterations++, x3);
    }
    printf("\nThe approx root is :- %f\n", x3);

    return 0;
}