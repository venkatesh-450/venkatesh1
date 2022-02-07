#include <stdio.h>

int main()
{

    int a, b;
    int c;
    float d;

    a = 10;
    b = 3;

    c = a + b;
    printf("%d+%d is = %d\n", a, b, c);

    c = a - b;
    printf(" %d -%d is = %d\n", a, b, c);

    c = a * b;
    printf("%d*%d is = %d\n", a, b, c);

    d = (float)a / (float)b;
    printf("%d/%d is  = %f\n", a, b, d);

    c = a % b;
    printf("%d % %d=%d\n",a, b, c);
    
    return 0;
}
