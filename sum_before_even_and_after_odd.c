#include "sum_before_even_and_after_odd.h"
#include <stdlib.h>

int sum_before_even_and_after_odd(int arr[], int n) {
    int even = -1;
    int odd = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            odd = i;
            break;
        }
    }

    if (even == -1 || odd == -1) {
        return 0; // Если не найдены чётные или нечётные элементы
    }

    int sum_before_even = 0;
    for (int i = 0; i < even; i++) {
        sum_before_even += abs(arr[i]);
    }

    int sum_after_odd = 0;
    for (int i = odd + 1; i < n; i++) {
        sum_after_odd += abs(arr[i]);
    }

    return sum_before_even + sum_after_odd;
}
