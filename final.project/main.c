#include <stdio.h>
#include <locale.h>
#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include "additional.h"

int main() {
    setlocale(LC_ALL, "Rus");
    int choice;
    while (1) {
        printf("\n--- МЕНЮ ПРОЕКТА ---\n1. Лаба 1 (Путь)\n2. Лаба 1 (Доп: Скорость)\n3. Лаба 2 (База)\n4. Лаба 2 (Доп)\n5. Лаба 3 (База)\n6. Лаба 3 (Доп)\n0. Выход\nВыбор: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); continue;
        }
        if (choice == 0) break;

        switch (choice) {
            case 1: {
                float v1, v2, t, res;
                printf("Введите v1, v2, t: "); scanf("%f %f %f", &v1, &v2, &t);
                res = calculate_path(v1, v2, t);
                if (res >= 0) printf("Путь: %f км\n", res);
                else printf("ОШИБКА: Проверьте v>=0, t>0 и v1>=v2!\n");
                break;
            }
            case 2: {
                float s, t, res;
                printf("Введите S и T: "); scanf("%f %f", &s, &t);
                res = calculate_speed(s, t);
                if (res >= 0) printf("Скорость: %f\n", res);
                else printf("ОШИБКА данных!\n");
                break;
            }
            case 3: run_lab2_basic(); break;
            case 4: {
                float x; int n;
                printf("Введите x и n: "); scanf("%f %d", &x, &n);
                printf("Сумма ряда: %f\n", calculate_series(x, n)); // ИМЯ ИСПРАВЛЕНО
                break;
            }
            case 5:
                while (getchar() != '\n'); // Чистим буфер перед getchar()
                run_lab3_basic();
                break;
            case 6: {
                int c, u = 0, l = 0, flag = 0;
                printf("Текст (Ctrl+Z для конца):\n");
                while (getchar() != '\n'); // Чистим буфер
                while ((c = getchar()) != EOF) {
                    if (c == ' ' || c == '\n') flag = 0;
                    else if (flag == 0) { filter_start(c, &u, &l); flag = 1; }
                }
                printf("Заглавные: %d, Строчные: %d\n", u, l);
                break;
            }
        }
    }
    return 0;
}
