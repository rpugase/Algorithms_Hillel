#include <iostream>
#include <vector>
#include <cmath>
#include "lesson/first/first_lesson.h"
#include <cassert>

using namespace std;

void test_is_prime();
void test_binary_search();
void test_count_n();
void test_count_logn();
void test_sqrt();
void test_reverse_array();

int main() {
    test_is_prime();
    test_binary_search();
    test_count_n();
    test_count_logn();
    test_reverse_array();
    test_sqrt();
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
    assert(count_n(arr, 2, 2002) == 16); // 16

    cout << __func__ << " PASSED" << endl;
}

void test_count_logn() {
    vector<int> arr = {1, 4, 8, 11, 21, 23, 24, 64, 70, 84, 125, 704, 1099, 1200, 1201, 1202, 2000};

    assert(count_logn(arr, 1, 10) == 3); // 3
    assert(count_logn(arr, 200, 700) == 0); // 0
    assert(count_logn(arr, 20, 100) == 6); // 6
    assert(count_logn(arr, 1000, 2000) == 5); // 5
    assert(count_logn(arr, 84, 84) == 1); // 1
    assert(count_logn(arr, 2, 2002) == 16); // 16

    cout << __func__ << " PASSED" << endl;
}

void test_sqrt() {
    double eps = 1e+7;

    assert(int(sqrt_t(4)) == 2); // 2;
    assert(int(sqrt_t(25)) == 5); // 5;
    assert(int(sqrt_t(163)*eps) == int(12.76714539 * eps)); //  12.7671453

    cout << __func__ << " PASSED" << endl;
}

void test_reverse_array() {
    vector<int> arr = {1, 4, 8, 11, 21, 23, 24, 64, 70, 84};

    assert((reverse_array(arr) == vector<int>{84, 70, 64, 24, 23, 21, 11, 8, 4, 1}));

    cout << __func__ << " PASSED" << endl;
}