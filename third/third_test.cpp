#include "third_lesson.h"
#include <cassert>
#include <iostream>
#include <vector>
#include <random>

using namespace std;

void test_count() {
    assert(count(21) == 3);
    assert(count(6) == 1);

    cout << __func__ << " PASSED" << endl;
}

void test_quick_sort() {
    vector<double> lengths = {10, 100, 1e3, 1e5, 1e6, 1e7};
    for (int length : lengths) {
        vector<int> arr = vector<int>(length);
        std::default_random_engine generator;
        std::uniform_int_distribution<int> distribution(1,100);
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = distribution(generator);
        }

        auto start = chrono::high_resolution_clock::now();
        quick_sort(arr);
        auto end = chrono::high_resolution_clock::now();

        cout << length << " " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << endl;
    }
}

int main() {
    test_count();
    test_quick_sort();
    return 0;
}