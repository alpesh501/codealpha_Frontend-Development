
// #include <stdio.h>

// int linearsearch(int n, int num, int arr[]) {
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == num) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n, num;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n]; 

//     printf("Enter %d elements:\n", n);
//     for(int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the number to search for: ");
//     scanf("%d", &num);


//     int result = linearsearch(n, num, arr);

//     if(result != -1) {
//         printf("Element found at index: %d\n", result);
//         printf("Element found at position: %d\n", result+1);
//     } else {
//         printf("Element not found in the array\n");
//     }

//     return 0;
// }


#include <stdio.h>

void insertion(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertion(arr, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

