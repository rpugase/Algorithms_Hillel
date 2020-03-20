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

int count_logn(const std::vector<int> &arr, unsigned left_bound, unsigned right_bound) {
    unsigned left_result = 0;
    unsigned right_result = 0;

    unsigned left = 0;
    unsigned right = arr.size() - 1;

    while (left <= right) {
        unsigned medium = (right + left) / 2;

        if (left_bound >= arr[medium] && left_bound <= arr[medium + 1]) {
            if (arr[medium] == left_bound) left_result = medium;
            else left_result = medium + 1;
            break;
        }

        if (arr[medium] <= left_bound) left = medium + 1;
        else right = medium - 1;
    }

    right = arr.size() - 1;
    while (left <= right) {
        unsigned medium = (right + left) / 2;

        if (right_bound >= arr[medium] && right_bound <= arr[medium + 1]) {
            if (arr[medium + 1] == right_bound) right_result = medium + 2;
            else right_result = medium + 1;
            break;
        }

        if (arr[medium] <= right_bound) left = medium + 1;
        else right = medium - 1;
    }

    return right_result - left_result;
}