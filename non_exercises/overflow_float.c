#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 浮動小数点 float のオーバーフロー実験 */
    // 結合法則が成り立たないので、aとbの答えは異なる
    float a, b;

    a = (3.14 + 1e20) - 1e20;
    b = 3.14 + (1e20 - 1e20);
    printf("(3.14 + 1e20) - 1e20 = %f\n", a);
    printf("3.14 + (1e20 - 1e20) = %f\n", b);
    
    return 0;
}

