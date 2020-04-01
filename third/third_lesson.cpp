#include <cstdio>
#include "third_lesson.h"

// PRIVATE
int summa(int n, int sum) {
    if (n / 10 == 0) {
        return sum + n;
    }

    return summa(n / 10, sum + n % 10);
}

int count(int n, int op) {
    if (n <= 0) {
        return op;
    }

    return count(n - summa(n, 0), op + 1);
}

// PUBLIC
int count(int n) {
    return count(n, 0);
}