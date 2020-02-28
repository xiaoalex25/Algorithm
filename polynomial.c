#include <stdlib.h>
#define MaxDegree 100

int max(int a, int b) {
    if (a >= b)
        return a;
    return b;
}

/**
 * 定义多项式数据结构
 */
typedef struct {
    int coeffArray[MaxDegree + 1];
    int highPower;//最高项系数
} * Polynomial;

/**
 * 初始化一个多项式
 *
 * @param poly
 */
void zeroPolynomial(Polynomial poly) {
    for (int i = 0; i < MaxDegree; i++)
        poly -> coeffArray[i] = 0;
    poly -> highPower;

}

/**
 * 两个多项式相加
 *
 * @param poly1
 * @param poly2
 * @param poly
 */
void addPolynomial(const Polynomial poly1, const Polynomial poly2, Polynomial poly) {
    poly -> highPower = max(poly1 -> highPower, poly2 -> highPower);
    for (int i = 0; i < poly -> highPower; ++i)
        poly -> coeffArray[i] = poly1 -> coeffArray[i] + poly2 -> coeffArray[i];
}


