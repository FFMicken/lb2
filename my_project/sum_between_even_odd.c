#include "sum_between_even_odd.h"
#include <stdlib.h>

int sum_between_even_odd(int arr[], int n) {
    int start = -1;
    int end = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            start = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            end = i;
            break;
        }
    }

    if (start == -1 || end == -1 || start >= end) {
        return 0; // Если не найдены чётные и нечётные элементы
    }

    int sum = 0;
    for (int i = start + 1; i < end; i++) {
        sum += abs(arr[i]);
    }

    return sum;
}
