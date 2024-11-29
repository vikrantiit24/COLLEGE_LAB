// #include<stdio.h>
// int main() {
//     int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
//     int length = 10;
//     for (int i = 0; i < length; i++) {
//         int min_pos = i;
//         for (int j = i + 1; j < length; j++) {
//             if (a[j] < a[min_pos]) 
//                 min_pos = j;
//         }
//         if (min_pos != i) {
//             int temp = a[i];
//             a[i] = a[min_pos];
//             a[min_pos] = temp;
//         }
//     }
//     for (int i = 0; i < length; i++)
//         printf("a[%d] = %d\n", i, a[i]);
//     return 0;
// }
//Write a C program that sorts a given array of names
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;
//     printf("Enter the number of names: ");
//     scanf("%d", &n);

//     char names[n][100], temp[100];
//     printf("Enter the names:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%s", names[i]);
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(names[i], names[j]) > 0) {
//                 strcpy(temp, names[i]);
//                 strcpy(names[i], names[j]);
//                 strcpy(names[j], temp);
//             }
//         }
//     }

//     printf("\nSorted names:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }
//Descending order 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int a[n];
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n - 1; i++) {
//         int max_pos = i;
//         for (int j = i + 1; j < n; j++) {
//             if (a[j] > a[max_pos]) {
//                 max_pos = j;
//             }
//         }
//         if (max_pos != i) {
//             int temp = a[i];
//             a[i] = a[max_pos];
//             a[max_pos] = temp;
//         }
//     }

//     printf("Sorted array in descending order:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
//bubble sort 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array in ascending order:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }