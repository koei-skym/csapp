#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);
    printf("\n");
}

void show_answer(const char *str) {
    byte_pointer strp = (byte_pointer) str;
    show_bytes(strp, strlen(str));
}

int main(int argc, char const *argv[])
{   
    // char は 1 byte なので、
    // 文字列を表示させてもリトルエンディアンとビッグエンディアンで順序に変わりはない。
    // つまり、どちらも一致する
    const char *s = "abcdef";

    show_answer(s);

    return 0;
}
