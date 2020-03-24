#include "second_lesson.h"

int collatz(int n, int& acc);

int collatz(int n) {
    int acc = 0;
    collatz(n, acc);
    return acc;
}

int collatz(int n, int& acc) {
    acc++;
    if (n == 1) {
        return acc;
    }

    if (n % 2 == 0) {
        return collatz(n / 2, acc);
    } else {
        return collatz(n * 3 + 1, acc);
    }
}