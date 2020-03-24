#include <vector>
#include "lesson/second/second_lesson.h"

using namespace std;

void test_collatz();

int main() {
    test_collatz();
    return 0;
}

void test_collatz() {
    for (int i = 3; i <= 1000; ++i) {
        printf("%d %d\n", i, collatz(i));
    }
}