#include <stdio.h>

int main() {
    int intValue;
    float floatValue;

    int *intP;
    float *floatP;

    intP = &intValue;
    floatP = &floatValue;

    *intP = 42;
    *floatP = 3.14;

    printf("Int value: %d\n", intValue);
    printf("Float value: %.2f\n", floatValue);

    return (0);
}
