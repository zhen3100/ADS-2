// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double res = 1;
    for (uint16_t i = 1; i <= n; i++) {
        res = res * value;
    }
    return res;
}

uint64_t fact(uint16_t n) {
    uint64_t res = 1;
    uint16_t i = 1;
    while (n >= i) {
        res = res * i;
        i++;
    }
    return res;
}

double calcItem(double x, uint16_t n) {
    double res = (pown(x, n) / fact(n));
    return res;
}

double expn(double x, uint16_t count) {
    double res = 0;
    for (uint16_t n = 0; n < count; n++) {
        res += pown(x, n) / fact(n);
    }
    return res;
}

double sinn(double x, uint16_t count) {
    double res = 0;
    for (uint16_t n = 1; n <= count; n++) {
        res += pown(-1, (n - 1)) * calcItem(x, (2 * n - 1));
    }
    return res;
}

double cosn(double x, uint16_t count) {
    double res = 0;
    for (uint16_t n = 1; n <= count; n++) {
        res += pown(-1, (n - 1)) * calcItem(x, (2 * n - 2));
    }
    return res;
}
