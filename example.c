#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buf = NULL;
    size_t buf_len = 0;
    FILE *mem = open_memstream(&buf, &buf_len);

    fprintf(mem, "Hello, world!");
    fclose(mem);

    printf("[%s][%zd]\n", buf, buf_len);
    free(buf);

    return 0;
}
