#include <cmath>
#include <vector>

bool is_prime(int n) {

    if (n == 1) return false;
    if (n % 2 == 0) return true;

    for (int i = 3; i < sqrt(n); i+=2) {
        if (n%i==0)
            return false;
    }

    return true;
}

bool binary_search(const std::vector<int> &arr, int n) {
    unsigned left = 0;
    unsigned right = arr.size() - 1;

    while (left <= right) {
        unsigned medium = (right + left) / 2;

        if (arr[medium] == n) return true;

        if (arr[medium] < n) left = medium + 1;
        else right = medium - 1;
    }

    return false;
}

int count_n(const std::vector<int> &arr, unsigned left_bound, unsigned right_bound) {
    unsigned result = 0;

    unsigned size_array = arr.size();
    for (unsigned i = 0; i < size_array; i++) {
        if (arr[i] >= left_bound && arr[i] <= right_bound) result++;
    }

    return result;
}