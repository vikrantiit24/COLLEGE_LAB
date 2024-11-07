#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int findMin(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int maximum = findMax(num1, num2, num3);
    int minimum = findMin(num1, num2, num3);
    printf("The maximum of the three numbers is %d\n", maximum);
    printf("The minimum of the three numbers is %d\n", minimum);
    return 0;
}