#include <stdio.h>
#define NOT_FOUND -1

/**
 * 二分查找算法
 *
 * @param arr 保存二分查找的数组
 * @param x 要查找的元素
 * @param n 数组大小
 * @return  查找结果
 */
int binarySearch(const int arr[], int x, int n) {
    int  low, mid, high;
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high)/2;
        if (x > arr[mid])
            low = mid + 1;
        else if (x < arr[mid])
            high = mid - 1;
        else
            return mid;
    }
    return NOT_FOUND;
}

/*int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result = binarySearch(arr, 6, 10);
    printf("所查找的元素下标位%d", result);
    return 0;
}*/
