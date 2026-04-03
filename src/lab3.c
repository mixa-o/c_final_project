#include <stdio.h>
#include "lab3.h"

void run_lab3_basic() {
    int c, prev_c = ' ', flag = 0, cnt = 0;
    printf("¬ведите текст (Ctrl+Z дл€ конца):\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '.' || c == '\n' || c == ',') {
            if (flag == 1) {
                char low = (prev_c >= 'A' && prev_c <= 'Z') ? prev_c + 32 : prev_c;
                if ((low >= 'a' && low <= 'z') &&
                    !(low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u' || low == 'y')) {
                    cnt++;
                }
            }
            flag = 0;
        } else {
            flag = 1;
        }
        prev_c = c;
    }
    printf("\n—лов на согласную: %d\n", cnt);
}
