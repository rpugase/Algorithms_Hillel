#include <iostream>
#include "first_lesson.h"

using namespace std;

void test_is_prime();

int main() {
    test_is_prime();
    return 0;
}

void test_is_prime() {
    assert(is_prime(2)); // true;
    assert(!is_prime(1)); // false;
    assert(is_prime(13)); // true;
    assert(is_prime(97)); // true;
    assert(is_prime(1000000007)); // true;
    assert(!is_prime(1000000011)); // false;

    cout << "TEST PASSED";
}