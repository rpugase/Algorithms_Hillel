#include <cassert>
#include "third_lesson.h"
#include <iostream>

using namespace std;

void test_count() {
    assert(count(21) == 3);
    assert(count(6) == 1);

    cout << __func__ << " PASSED" << endl;
}

int main() {
    test_count();
    return 0;
}