#include <stdio.h>

int main() {
  
    int arr[7] = {10, 26, 7, 39, 73, 26, 27};
    int max = arr[0];
    int min = arr[0];
    int i;
    for ( i = 1 ;i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("phan tu lonn nhat trong mang la: %d\n", max);
    printf("phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

