#include <stdio.h>
#include <math.h>

float func(float x)
{
  return (x * x * x) - x - 1;
}

float abse(float x)
{
  if (x < 0)
  {
    return x * -1;
  }
  return x;
}

int main()
{
  float x1, x2, x0, error;
  printf("Enter X1 :- ");
  scanf("%f",&x1);
  printf("\nEnter X2 :- ");
  scanf("%f",&x2);
  printf("\nEnter the error :- ");
  scanf("%f",&error);
  // scanf("%f %f %f", &x1, &x2, &error);
  int iter = 1;
  if (func(x1) * func(x2) > 0)
  {
    printf("Bisection method will not work");
    return -1;
  }

  x0 = (x1 + x2) / 2;
  while (abse((x1 - x2) / x0) >= error)
  {
    if (func(x0) * func(x1) == 0)
    {
      break;
    }
    else if (func(x0) * func(x1) < 0)
    {
      x2 = x0;
    }

    else
    {
      x1 = x0;
    }
    x0 = (x1 + x2) / 2;
    printf("\nIteration:- %d  x0 :- %f",iter++, x0);
  }
  printf("\napprox value of the root is :- %f", x0);

  return 0;
}