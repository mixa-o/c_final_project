#include <stdio.h>
#include "additional.h"

float calculate_speed(float s, float t) {
    return (t > 0 && s >= 0) ? (s / t) : -1.0f;
}

float calculate_series(float x, int n) {
    float s = 1.0, a = 1.0;
    int i = 1;
    if (n > 1) {
        do {
            a = a * x / i;
            s = s + a;
            if (s >= 10.0) break;
            i++;
        } while (i < n);
    }
    return s;
}

void filter_start(int c, int *u_cnt, int *l_cnt) {
    if (c >= 'A' && c <= 'Z') (*u_cnt)++;
    else if (c >= 'a' && c <= 'z') (*l_cnt)++;
}
