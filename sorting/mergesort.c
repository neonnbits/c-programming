#include <stdio.h>
#include <stdlib.h>

void printarray(int A[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int start, int mid, int end) {
    int i, j, k;
    int ls = mid - start + 1;
    int rs = end - mid;

    int L[ls];
    int R[rs];

    for (i = 0; i < ls; i++) {
        L[i] = A[start + i];
    }

    for (i = 0; i < rs; i++) {
        R[i] = A[mid + 1 + i];
    }

    k = start, i = 0, j = 0;
    while (i < ls && j < rs) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < ls) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < rs) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int A[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergesort(A, start, mid);
        mergesort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
}

int main(void) {
    int A[] = {87,23,6,46,34}; // Example array
    size_t size = sizeof(A) / sizeof(int);

    if (size == 0) {
        printf("Array is empty. Nothing to sort.\n");
        return 0;
    }

    mergesort(A, 0, size - 1);

    printf("Sorted array:\n");
    printarray(A, size);

    return 0;
}
