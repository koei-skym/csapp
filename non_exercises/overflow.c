#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* オーバーフローを発生させる実験 */
    printf("%d", 200 * 300 * 400 * 500);
    return 0;
}
