#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buf = NULL;
    size_t buf_len = 0;
    FILE *mem = open_memstream(&buf, &buf_len);

    fprintf(mem, "Hello, world!");
    fflush(mem);

    printf("[%s][%zd]\n", buf, buf_len); // => [Hello, world!][13]
    fclose(buf);

    return 0;
}
