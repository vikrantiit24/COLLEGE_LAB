Program: Selection Sort
* Author:vikrant bhan 
// An example of applying each step of the selection sort algorithm...
//
// Initial array: 5, 9, 7, 6, 4, 0, 2, 3, 8, 1
//
//        Step 0: 0, 9, 7, 6, 4, 5, 2, 3, 8, 1
//        Step 1: 0, 1, 7, 6, 4, 5, 2, 3, 8, 9
//        Step 2: 0, 1, 2, 6, 4, 5, 7, 3, 8, 9
//        Step 3: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 4: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 5: 0, 1, 2, 3, 4, 5, 7, 6, 8, 9
//        Step 6: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//        Step 7: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//        Step 8: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

#include<stdio.h>
int main() {
    int a[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
    int length = 10;
    for (int i = 0; i < length; i++) {
        int min_pos = i;
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[min_pos]) 
                min_pos = j;
        }
        if (min_pos != i) {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
    for (int i = 0; i < length; i++)
        printf("a[%d] = %d\n", i, a[i]);
    return 0;
}
