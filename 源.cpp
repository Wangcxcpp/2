#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100] = { 0 };
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, n);
    printf("Maximum contiguous sum is %d\n", max_sum);
    return 0;
}