#include <stdio.h>
#include "lab2.h"

void run_lab2_basic() {
    float s = 1.0, a = 1.0, x;
    int n, i = 1;
    printf("¬ведите n: "); scanf("%d", &n);
    printf("¬ведите x: "); scanf("%f", &x);
    while(i < n) {
        a = a * x / i;
        s = s + a;
        i = i + 1;
    }
    printf("–езультат s = %f\n", s);
}
