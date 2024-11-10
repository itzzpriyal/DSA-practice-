//  if array is already given nd in between it we have to insert


#include <stdio.h>

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

int main() {
    int A[100] = {0}; // Array for max heap (0 index is unused for simplicity)
    int n = 6;        // Current number of elements in the heap
    
    // Existing max heap
    A[1] = 50;
    A[2] = 30;
    A[3] = 40;
    A[4] = 10;
    A[5] = 5;
    A[6] = 20;

    printf("Initial Max Heap Array: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Insert new value into the heap
    int newValue = 60;
    insertHeap(A, &n, newValue);

    printf("Max Heap Array after insertion: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;

}


// #include <stdio.h>
// #include <stdlib.h>


// // Function to insert a value into a max heap
// void insertHeap(int A[], int *n, int value) {
//     *n = *n + 1;//that is initialised from one rather than zero
//     int i = *n;
//     A[i] = value;

//     // Adjust the position of the inserted value to maintain max heap property
//     while (i > 1) {
//         int parent = i / 2;
//         if (A[parent] < A[i]) {
//             // Swap if the parent is less than the current node
//             int temp = A[parent];
//             A[parent] = A[i];
//             A[i] = temp;
//             i = parent; // Move to parent position
//         } else {
//             return; // Exit if the max-heap property is satisfied
//         }
//     }
// }

// int main() {
    

//     int A[100]; // Array for max heap (assuming size 100 for simplicity)
//     int n = 0;  // Current number of elements in the heap

//     // Insert nodes into the heap
//     insertHeap(A, &n, 50);
//     insertHeap(A, &n, 30);
//     insertHeap(A, &n, 40);
//     insertHeap(A, &n, 10);
//     insertHeap(A, &n, 5);
//     insertHeap(A, &n, 20);

//     printf("Max Heap Array: ");
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", A[i]);
//     }
//     printf("\n");

//     return 0;
// }


