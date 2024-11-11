#include <stdio.h>
#include <stdlib.h>

// Function to insert a value into a max heap
void insertHeap(int A[], int *n, int value) {
    *n = *n + 1;
    int i = *n;
    A[i] = value;

    // Adjust the position of the inserted value to maintain max heap property
    while (i > 1) {
        int parent = i / 2;
        if (A[parent] < A[i]) {
            // Swap if the parent is less than the current node
            int temp = A[parent];
            A[parent] = A[i];
            A[i] = temp;
            i = parent; // Move to parent position
        } else {
            return; // Exit if the max-heap property is satisfied
        }
    }
}

// Helper function to maintain max heap after removing root
void heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && A[left] > A[largest]) {
        largest = left;
    }
    if (right <= n && A[right] > A[largest]) {
        largest = right;
    }
    if (largest != i) { // this condition checks ki if by chance left or right were greater so now largest is no longer i=3 but i=7
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        heapify(A, n, largest);
    }
}

// Function to perform heapsort
void heapsort(int A[], int n) {
    for (int i = n; i > 1; i--) {
        // Swap root (maximum value) with the last element
        int temp = A[1];
        A[1] = A[i];
        A[i] = temp;

        // Reduce the size of the heap
        n--;

        // Heapify the root element to maintain max-heap property i.e it checks if the heap is in max heap form every time it sorts an element
        heapify(A, n, 1); //here i=1 as we only have to check leaf node
    }
}

int main() {
    int A[100]; // Array for max heap (assuming size 100 for simplicity)
    int n = 0;  // Current number of elements in the heap

    // Insert nodes into the heap
    insertHeap(A, &n,15);
    insertHeap(A, &n, 5);
    insertHeap(A, &n, 20);
    insertHeap(A, &n, 1);
    insertHeap(A, &n,17);
    insertHeap(A, &n, 10);
    insertHeap(A, &n, 30);

    printf("Max Heap Array: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Perform heapsort
    heapsort(A, n);

    printf("Sorted Array: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
