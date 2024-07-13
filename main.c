/*Selection Sort
Sort a given set of n integer elements using Selection Sort method and compute its time complexity. 
Run the program for varied values of n>5000 and record the time taken to sort. 
Plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.
Demonstrate using C how the brute force method works along with its time complexity analysis: worst case, average case and best case.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    clock_t start = clock();
    selection_sort(arr, n);
    clock_t end = clock();

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    double time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for sorting: %f seconds\n", time_used);

    free(arr);
    return 0;
}
