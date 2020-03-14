#include <cmath>

bool is_prime(int n) {

    if (n == 1) return false;
    if (n % 2 == 0) return true;

    for (int i = 3; i < sqrt(n); i+=2) {
        if (n%i==0)
            return false;
    }

    return true;
}

