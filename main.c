#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main() {
    double arr[] = {5, 10, 4, 39, 12, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    printf("Sum: %.2f\n", sum(arr, n));
    printf("Average: %.2f\n", average(arr, n));
    printf("Std Dev: %.2f\n", stddev(arr, n));
    printf("Max: %.2f\n", max_value(arr, n));
    printf("Min: %.2f\n", min_value(arr, n));
    printf("Range Abs: %.2f\n", range_abs(arr, n));

    return 0;
}

