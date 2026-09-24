#include <stdio.h>
#include "output_array.h"

void print_array(double arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("]\n");
}

