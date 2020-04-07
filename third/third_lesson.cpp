#include <cstdio>
#include <vector>
#include "third_lesson.h"

using namespace std;

// PRIVATE
int summa(int n, int sum) {
    if (n / 10 == 0) {
        return sum + n;
    }

    return summa(n / 10, sum + n % 10);
}

int count(int n, int op) {
    if (n <= 0) {
        return op;
    }

    return count(n - summa(n, 0), op + 1);
}

vector<int> quick_sort(vector<int>& arr, int l, int r) {
    const int l1 = l;
    const int r1 = r;
    int x = arr[(l + r) / 2];

    printf("%d %d\n", l, r);

    while (l <= r) {
        while (arr[l] < x) l++;
        while (arr[r] > x) r--;

        if (l <= r) {
            swap(arr[l++], arr[r--]);
        }

        if (l < r1) quick_sort(arr, l, r1);
        if (l1 < r) quick_sort(arr, l1, r);
    }

    return arr;
}

// PUBLIC
int count(int n) {
    return count(n, 0);
}

vector<int> quick_sort(vector<int>& arr) {
    return quick_sort(arr, 0, arr.size() - 1);
}