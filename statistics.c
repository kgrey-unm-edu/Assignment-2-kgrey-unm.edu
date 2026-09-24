#include "statistics.h"
#include <math.h>

double sum(double arr[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}

double average(double arr[], int n) {
    return sum(arr, n) / n;
}

double stddev(double arr[], int n) {
    double avg = average(arr, n);
    double variance = 0;

    for (int i = 0; i < n; i++) {
        double diff = arr[i] - avg;
        variance += diff * diff;
    }

    variance /= n;
    return sqrt(variance);
}

double max_value(double arr[], int n) {
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double min_value(double arr[], int n) {
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double range_abs(double arr[], int n) {
    return fabs(max_value(arr, n) - min_value(arr, n));
}

