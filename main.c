#include <stdio.h>
#include <math.h>

// Function to calculate the sum of an array
int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

// Function to calculate the average of an array
double average(int arr[], int n) {
    return (double)sum(arr, n) / n;
}

// Function to calculate the standard deviation of an array
double standard_deviation(int arr[], int n) {
    double avg = average(arr, n);
    double variance = 0.0;

    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - avg, 2);
    }
    variance /= n;  // population standard deviation
    return sqrt(variance);
}

int main() {
    // Three different arrays
    int arr1[] = {2, 4, 6, 8};
    int arr2[] = {5, 10, 15};
    int arr3[] = {1, 2, 3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Process and print results for each array
    printf("Array 1: sum=%d, average=%.2f, std_dev=%.2f\n",
           sum(arr1, n1), average(arr1, n1), standard_deviation(arr1, n1));

    printf("Array 2: sum=%d, average=%.2f, std_dev=%.2f\n",
           sum(arr2, n2), average(arr2, n2), standard_deviation(arr2, n2));

    printf("Array 3: sum=%d, average=%.2f, std_dev=%.2f\n",
           sum(arr3, n3), average(arr3, n3), standard_deviation(arr3, n3));

    return 0;
}