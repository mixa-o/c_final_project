#include "lab1.h"

float calculate_path(float v1, float v2, float t) {
    // Строгая проверка по твоему условию
    if (v1 >= 0 && v2 >= 0 && t > 0 && v1 >= v2) {
        return ((v1 + v2) / 2.0) * (t / 3600.0);
    }
    return -1.0f; // Признак ошибки
}
