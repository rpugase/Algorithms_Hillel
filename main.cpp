#include <iostream>
#include <vector>
#include "first_lesson.h"

using namespace std;

void test_is_prime();
void test_binary_search();
void test_count_n();

int main() {
    test_is_prime();
    test_binary_search();
    test_count_n();
    return 0;
}

void test_is_prime() {
    assert(is_prime(2)); // true;
    assert(!is_prime(1)); // false;
    assert(is_prime(13)); // true;
    assert(is_prime(97)); // true;
    assert(is_prime(1000000007)); // true;
    assert(!is_prime(1000000011)); // false;

    cout << __func__ << " PASSED" << endl;
}

void test_binary_search() {
    vector<int> arr = {1, 4, 8, 11, 21, 23, 24, 64, 70, 84, 125, 704, 1099, 1200, 1201, 1202, 2000};

    assert(binary_search(arr, 8)); // YES
    assert(!binary_search(arr, 10)); // NO
    assert(binary_search(arr, 70)); // YES
    assert(!binary_search(arr, 1098)); // NO
    assert(binary_search(arr, 1202)); // YES
    assert(!binary_search(arr, 1999)); // NO

    cout << __func__ << " PASSED" << endl;
}

void test_count_n() {
    vector<int> arr = {1, 4, 8, 11, 21, 23, 24, 64, 70, 84, 125, 704, 1099, 1200, 1201, 1202, 2000};

    assert(count_n(arr, 1, 10) == 3); // 3
    assert(count_n(arr, 200, 700) == 0); // 0
    assert(count_n(arr, 20, 100) == 6); // 6
    assert(count_n(arr, 1000, 2000) == 5); // 5
    assert(count_n(arr, 84, 84) == 1); // 1

    cout << __func__ << " PASSED" << endl;
}