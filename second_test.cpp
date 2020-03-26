#include <vector>
#include <cassert>
#include <iostream>
#include "lesson/second/second_lesson.h"

using namespace std;

void test_collatz();
void test_tribonacci_loop();
void test_tribonacci_recursive();
void test_binary_search();

vector<int> tribonacci = {0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, 121415, 223317, 410744, 755476, 1389537, 2555757, 4700770, 8646064, 15902591, 29249425, 53798080, 98950096, 181997601};

int main() {
//    test_collatz();
//    test_tribonacci_loop();
//    test_tribonacci_recursive();
    test_binary_search();
    return 0;
}

void test_collatz() {
    for (int i = 3; i <= 1000; ++i) {
        printf("%d %d\n", i, collatz(i));
    }
}

void test_tribonacci_loop() {
    for (int i = 0; i < tribonacci.size(); i++) {
        assert(tribonacci_loop(i) == tribonacci[i]);
    }

    cout << __func__ << " PASSED" << endl;
}

void test_tribonacci_recursive() {
    for (int i = 0; i < tribonacci.size(); i++) {
        assert(tribonacci_recursive(i) == tribonacci[i]);
    }

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