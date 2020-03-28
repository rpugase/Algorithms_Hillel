#include "second_lesson.h"
#include <vector>
#include <string>

using namespace std;

// PRIVATE
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

bool binary_search(const vector<int> &arr, int number, unsigned l, unsigned r) {
    unsigned m = (l + r) / 2;

    if (l > r) return false;

    if (arr[m] == number) return true;

    return (arr[m] < number) ? binary_search(arr, number, m + 1, r) : binary_search(arr, number, l, m - 1);
}

int tribonacci_recursive(int k, vector<int>& temp) {
    if (k < 2) {
        return 0;
    } else if (k < 4) {
        return 1;
    }

    if (!temp[k - 1]) temp[k - 1] = tribonacci_recursive(k - 1, temp);
    if (!temp[k - 2]) temp[k - 2] = tribonacci_recursive(k - 2, temp);
    if (!temp[k - 3]) temp[k - 3] = tribonacci_recursive(k - 3, temp);

    return temp[k-1] + temp[k-2] + temp[k-3];
}

// PUBLIC
int collatz(int n) {
    int acc = 0;
    collatz(n, acc);
    return acc;
}

int tribonacci_loop(int k) {
    std::vector<int> arr = {0, 0, 1};
    if (k < arr.size()) return arr[k];

    for (int i = 3; i <= k; ++i) {
        arr.push_back(arr[i-1] + arr[i-2] + arr[i-3]);
    }

    return arr[arr.size() - 1];
}

int tribonacci_recursive(int k) {
    vector<int> temp = vector<int>(k);
    return tribonacci_recursive(k, temp);
}

bool binary_search(const vector<int> &arr, int number) {
    return binary_search(arr, number, 0, arr.size() - 1);
}

int super_digit(string n, int k) {
    if (n.size() == 1) {
        return stoi(n);
    }
    int acc = 0;
    for (char ch : n) {
        acc += ch - '0';
    }

    acc *= k%9;

    return super_digit(to_string(acc), 1);
}
