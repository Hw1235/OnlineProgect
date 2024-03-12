#include <stdio.h>

int main()
{
    int a = 10, b = 4;
    double c = 4, d = 2;

    int sum1 = 0;
    sum1 = a + c;

    int sum2 = 0;
    sum2 = b + d;

    printf("%d ", sum1);
    printf("%d ", sum2);
    printf("\n");

    int sub_1 = 0;
    sub_1 = a - c;

    int sub_2 = 0;
    sub_2 = b - d;

    printf("%.1f ", (float)sub_1);
    printf("%.1f ", (float)sub_2);

    return 0;
}