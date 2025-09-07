#include <stdio.h>
#include <math.h>


int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}


double average(int arr[], int n) {
    return (double)sum(arr, n) / n;
}


double standard_deviation(int arr[], int n) {
    double avg = average(arr, n);
    double variance = 0.0;

    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - avg, 2);
    }
    variance /= n;  
    return sqrt(variance);
}

int main() {

    int arr1[] = {2, 4, 6, 8};
    int arr2[] = {5, 10, 15};
    int arr3[] = {1, 2, 3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Array 1
    printf("./main\n");
    printf("Array 1:\n");
    printf("the average is: %.2f\n", average(arr1, n1));
    printf("the std is: %.2f\n", standard_deviation(arr1, n1));
    printf("the sum is: %d\n\n", sum(arr1, n1));

    // Array 2
    printf("Array 2:\n");
    printf("the average is: %.2f\n", average(arr2, n2));
    printf("the std is: %.2f\n", standard_deviation(arr2, n2));
    printf("the sum is: %d\n\n", sum(arr2, n2));

    // Array 3
    printf("Array 3:\n");
    printf("the average is: %.2f\n", average(arr3, n3));
    printf("the std is: %.2f\n", standard_deviation(arr3, n3));
    printf("the sum is: %d\n", sum(arr3, n3));

    return 0;
}
