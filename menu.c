#include <stdio.h>
#include <stdlib.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"

int main() {
    int choice;
    scanf("%d", &choice);

    if (choice < 0 || choice > 3) {
        printf("Данные некорректны\n");
        return 1;
    }

    int arr[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    switch (choice) {
        case 0:
            printf("%d\n", index_first_even(arr, n));
            break;
        case 1:
            printf("%d\n", index_last_odd(arr, n));
            break;
        case 2:
            printf("%d\n", sum_between_even_odd(arr, n));
            break;
        case 3:
            printf("%d\n", sum_before_even_and_after_odd(arr, n));
            break;
        default:
            printf("Данные некорректны\n");
            break;
    }

    return 0;
}
