  #include <stdio.h>
  #include <math.h>

  int main () {
    float a, b;

    printf("Type the first value: ");
    scanf("%f", &a);
    printf("Type the second value: ");
    scanf("%f", &b);

    printf("%f plus %f is equal to %f\n", a,b,a+b);
    printf("%f less %f is equal to %f\n", a,b,a-b);
    printf("%f multiplied by %f is equal to %f\n", a,b,a*b);
    printf("%f divided by %f is equal to %f\n", a,b,a/b);
    printf("%f to the power of %f is equal to %f\n", a,b,pow(a,b));
    printf("the square root of %f = %f\n", a, sqrt(a));
    printf("the square root of %f = %f\n", b, sqrt(b));

    return(0);
  }