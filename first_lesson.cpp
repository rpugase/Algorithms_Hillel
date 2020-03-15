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