#include <stdio.h>
#include <stdbool.h>

bool isEven(int x) {
    if (x % 2 == 0)
        return false;
    return true;
}

long power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (isEven(n))
        return power(x * x, n / 2) * x;
    return power(x * x, n / 2);
}

/*int main() {
    long result = power(2, 8);
    printf("计算结果为：%d", result);
}*/
