#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
    // Pushing double values
    double* val1 = (double*)malloc(sizeof(double));
    *val1 = 1.0;
    push(val1);
    printf("\npush(1.0);\n");

    double* val2 = (double*)malloc(sizeof(double));
    *val2 = 2.0;
    push(val2);
    printf("\npush(2.0);\n");

    double* val3 = (double*)malloc(sizeof(double));
    *val3 = 23.0;
    push(val3);
    printf("\npush(23.0);\n");

    double* val4 = (double*)malloc(sizeof(double));
    *val4 = 24.0;
    push(val4);
    printf("\npush(24.0);\n");

    double* val5 = (double*)malloc(sizeof(double));
    *val5 = 25.0;
    push(val5);
    printf("\npush(25.0);\n");

    double* val6 = (double*)malloc(sizeof(double));
    *val6 = 26.0;
    push(val6);
    printf("\npush(26.0);\n");

    // Pushing an int value (using double for compatibility)
    double* val7 = (double*)malloc(sizeof(double));
    *val7 = 7.0;
    push(val7);
    printf("\npush(7);\n");

    // Pop and cast the values back to double
    printf("\n\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());
    printf("\npop(); %.1f\n", *(double*)pop());

    return 0;
}
