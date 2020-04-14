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

void test_sort_string_array() {
    vector<string> arr = {"5", "10", "123", "1"};
    sort(arr.begin(), arr.end(), [](const string& s1, const string& s2) {
        return stoi(s1) < stoi(s2);
    });
    assert((arr == vector<string>{"1", "5", "10", "123"}));
    cout << __func__ << " PASSED" << endl;
}

void test_sort_time() {
    vector<vector<int>> times = {
            {10, 20, 30},
            {7, 30, 00},
            {23, 59, 59},
            {13, 30, 30}
    };

    vector<vector<int>> result = {
            {7, 30, 00},
            {10, 20, 30},
            {13, 30, 30},
            {23, 59, 59}
    };

    sort(times.begin(), times.end(), [] (vector<int>& a, vector<int>& b) {
        return a[0] < b[0] ||
                (a[0] == b[0] && a[1] < b[1]) ||
                (a[0] == b[0] && a[1] == b[1] && a[2] < b[2]);
    });

    assert(times == result);

    cout << __func__ << " PASSED" << endl;
}

int main() {
//    test_count();
//    test_quick_sort();
//    test_sort_string_array();
    test_sort_time();
    return 0;
}