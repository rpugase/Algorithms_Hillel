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

vector<string> sort_students(vector<string> input) {
    vector<string> students = vector<string>(input.size() / 4);
    for (int i = 0; i < input.size(); ++i) {
        if (i % 4 == 0) students[i / 4] = input[i + 2];
        if (i % 4 == 1) students[i / 4] += " " + input[i - 1];
        if (i % 4 == 2) students[i / 4] += " " + input[i - 1];
        if (i % 4 == 3) students[i / 4] += " " + input[i];
    }

    sort(students.begin(), students.end(), [] (string& s1, string& s2) {
        return s1[0] - '0' < s2[0] - '0' ||
                (s1[0] - '0' == s2[0] - '0' && s1[1] < s2[1]) ||
                (s1[0] - '0' == s2[0] - '0' && s1[1] == s2[1] && s1[3] < s2[3]);
    });

    return students;
}